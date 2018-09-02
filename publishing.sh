# checkout to the gh-pages branch
git checkout gh-pages

# reset to the state of the master
git reset --hard master

# install the plugins and build the static site
gitbook install && gitbook build

# copy the static site files into the current directory.
cp -R _book/* .

# remove 'node_modules' and '_book' directory
git clean -fx node_modules
git clean -fx _book

# removing md files because they are causing problems with github
git rm -r --cached **/**/**/**/*.md
git rm -r --cached **/**/**/*.md
git rm -r --cached **/**/*.md
git rm -r --cached **/*.md
git rm -r --cached *.md

# commit
git commit -a -m "Update docs"

# push to the origin
git push origin gh-pages -f

# checkout to the master branch
git checkout master
