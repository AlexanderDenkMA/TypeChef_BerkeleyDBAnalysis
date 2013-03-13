## Setup for TypeChef analysis of BerkeleyDB (c version)

Configuration is performed through ```configure```. We have
identified a small conservative set of configuration
flags that a controlled by configure, all starting with ```HAVE_```. 
Additional flags may be added later through file ```features```.

Otherwise the setup is quite straightforward.

TypeChef finds several type errors within a single feature
when compiling files of a deactivated feature. There seem
to be no presence conditions on files in the make scripts?


