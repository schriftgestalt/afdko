#!/bin/bash

set -e
set -x

# build sdist and wheel distribution packages in ./dist folder.
# Travis runs the `before_deploy` stage before each deployment, but
# we only want to build them once, as we want to use the same
# files for both Github and PyPI
if $(ls ./dist/afdko*.zip > /dev/null 2>&1) && \
		$(ls ./dist/afdko*.whl > /dev/null 2>&1); then
	echo "Distribution packages already exists; skipping"
else
	curl -O https://bootstrap.pypa.io/get-pip.py
	python get-pip.py --user
	python -m pip install --user virtualenv
	python -m virtualenv .venv/
	source .venv/bin/activate
	pip install --upgrade setuptools setuptools_scm wheel
	python setup.py sdist bdist_wheel
fi
