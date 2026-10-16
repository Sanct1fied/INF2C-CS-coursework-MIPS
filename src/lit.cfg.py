import os

import lit.formats

config.name = "Coursework smoke tests"
config.test_format = lit.formats.ShTest()
config.suffixes = [".test"]
config.test_source_root = os.path.dirname(__file__)
root = os.path.dirname(config.test_source_root)
config.test_exec_root = os.path.join(root, ".lit")
config.environment["LC_ALL"] = "C"
config.maxIndividualTestTime = int(os.environ.get("LIT_TEST_TIMEOUT", "0"))
