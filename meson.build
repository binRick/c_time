#//***********************************************************/
project(
    'c_time',          ['c'],         version : '0.0.1',         
    default_options : ['warning_level=2','c_std=gnu99'],
)
#//***********************************************************/
host_system = host_machine.system()

cc = meson.get_compiler('c')
sh = find_program('sh', required : true)
passh = find_program('passh', required : true)

#//  '-D_POSIX_C_SOURCE=199309L','-std=c99','-lrt',
add_global_arguments('-D_POSIX_C_SOURCE=200809L','-lm','-lrt','-D_GNU_SOURCE',
  language : 'c',
)


#//***********************************************************/
test_deps = []
#//***********************************************************/
incdir = include_directories(
  './include', 
  './deps', 
  '../',
  '../metalang99/include',
  '../ok',
)
#//***********************************************************/
test_time2 = executable('test_time2', [ 
    'src/time.c', 
    'tests/test_time2.c',  
  ], include_directories : [incdir], 
  dependencies : [],
)
test_time1 = executable('test_time1', [ 
    'src/time.c', 
    'tests/test_time1.c',  
  ], include_directories : [incdir], 
  dependencies : [],
)
#//***********************************************************/
tests = [
  ['test time 1', test_time1, 'test-time-1.log'],
  ['test time 2', test_time2, 'test-time-2.log'],
]
#//***********************************************************/

#//***********************************************************/
test_env = environment()
test_env.set('__SH', sh.full_path())
test_env.set('__BD', meson.current_build_dir())
test_env.set('__SD', meson.current_source_dir())
#//***********************************************************/
foreach i : tests
test(i[0], passh, args: ['-L', i[2], i[1] ], env: test_env)
endforeach
#//***********************************************************/


