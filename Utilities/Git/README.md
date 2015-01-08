Alias Scripts
=============

git-add-test-data
-----------------

Adds a new test file to git as filename.ext.md5, assuming the *real* content is
accessible in a remote location defined in CMake

### Test Scenarios:
I have no idea how to unit test bash scripts so I'm making a note of the things that need testing.

1. adding a single file that does not exist;
2. adding multiple files that do not exist;
3. adding a single file that already exists;
4. adding multiple files where one of them already exists;
5. adding multiple files where some of them already exist;
5. adding multiple files where all of them already exist;

