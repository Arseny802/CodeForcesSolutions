import ntpath
from argparse import ArgumentParser
from os import walk
from os import path


# Use argument "-d 2021/PizzaForces" or similar


class ContestResultMerger:
	def __init__(self, input_directory: str, silent_mode: bool = False):
		self.directory = input_directory
		self.silentMode = silent_mode
		if not self.silentMode:
			print("Using directory", self.directory)
		if path.isdir(self.directory):
			if not self.silentMode:
				print("Directory exists.")
		else:
			raise "Input directory doesn't exist!"
		pass

	namePrefix = 'Generated'
	namePostfix = 'Runner.cc'

	def merge(self):
		files = self.list_files()
		includes = self.get_total_includes(files)
		result_file_name = self.generate_result_filename()
		self.write_includes(result_file_name, includes)
		return

	@staticmethod
	def write_includes(result_filename, includes):
		with open(result_filename, 'w+', ) as output_file:
			for include_line in includes:
				output_file.write(include_line)

	def generate_result_filename(self):
		root, directory_name = ntpath.split(self.directory)
		filename = self.directory + '/'
		filename += self.namePrefix
		filename += directory_name
		filename += self.namePostfix
		return filename

	def list_files(self):
		filtered_filenames = []
		for (root, dir_names, all_filenames) in walk(self.directory):
			for filename in all_filenames:
				if filename.startswith('.') or \
						"CMakeList" in filename or \
						'Tests' in filename or \
						filename.endswith(".txt") or \
						filename.endswith(".md"):
					continue
				if not self.silentMode:
					print("Got file", filename)
				filtered_filenames.append(root + '/' + filename)
			break
		return filtered_filenames

	def get_total_includes(self, files):
		filtered_includes = []
		for file in files:
			self.get_file_includes(file, filtered_includes)
		filtered_includes = list(set(filtered_includes))

		for file in files:
			root, filename = ntpath.split(file)
			for include_line in filtered_includes:
				if filename in include_line:
					filtered_includes.remove(include_line)

		return filtered_includes

	@staticmethod
	def get_file_includes(file: str, includes: list):
		with open(file) as input_file:
			for input_line in input_file.readlines():
				if input_line.startswith('#include'):
					includes.append(input_line)


if __name__ == "__main__":
	silentMode: bool = False
	parser = ArgumentParser()
	parser.add_argument("-d", "--directory", dest="directory", help="write report to FILE", metavar="FILE")
	parser.add_argument("-q", "--quiet", action="store_false", dest="verbose",
	                    default=silentMode, help="don't print status messages to stdout")
	args = parser.parse_args()

	if not args.directory:
		if silentMode:
			raise "No input for file generation!"
		else:
			possibleDirectories = []
			for dirPath, dirNames, filenames in walk("."):
				for dirName in dirNames:
					if dirName.startswith('.') or 'build' in dirName:
						continue
					for (subDirPath, subDirNames, SubFilename) in walk(dirName):
						for subDirName in subDirNames:
							if subDirName.startswith('.'):
								continue
							print(subDirPath, subDirName)
							possibleDirectories.append(subDirPath + '/' + subDirName)
						break
				break

			if not possibleDirectories:
				raise "No input for file generation!"
			if len(possibleDirectories) == 1:
				directory = possibleDirectories[0]
			else:
				print("There are {} directories:".format(len(possibleDirectories)))
				index = 0
				for possibleDirectory in possibleDirectories:
					print(str(index) + '.', possibleDirectory)
					index += 1
				answer: int = -1
				while answer < 0 or answer > len(possibleDirectories) - 1:
					answer = int(input("Choose your directory index for code generation: "))
				directory = possibleDirectories[answer]

	else:
		directory = args.directory

	ContestResultMerger(directory, silentMode).merge()
