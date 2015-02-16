Alias Scripts
=============

git-add-test-data
-----------------

Adds a new test file to git as filename.ext.md5, assuming the *real* content is
accessible in a remote location defined in CMake

### Test Scenarios:
I have no idea how to unit test bash scripts so I'm making a note of the things that need testing.

* adding a single file that does not exist;
* adding multiple files that do not exist;
* adding a single file that already exists in git;
* adding multiple files where one of them already exists in git;
* adding multiple files where some of them already exist in git;
* adding multiple files where all of them already exist in git;
* adding a single file where the content link is untracked
