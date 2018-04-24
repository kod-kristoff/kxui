project(
	'kxui',
	'c', 'cpp',
	version : '0.0.1',
	license : 'MIT'
)

add_global_arguments(
	'-std=c++17', language : 'cpp'
)

elm_cpp_dep 	= dependency('elementary-cxx')
ecore_cpp_dep	= dependency('ecore-cxx')

inc = include_directories('include')

subdir('src')
subdir('test')
