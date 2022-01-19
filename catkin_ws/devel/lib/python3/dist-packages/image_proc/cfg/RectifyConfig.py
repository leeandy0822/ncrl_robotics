## *********************************************************
##
## File autogenerated for the image_proc package
## by the dynamic_reconfigure package.
## Please do not edit.
##
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'name': 'Default', 'type': '', 'state': True, 'cstate': 'true', 'id': 0, 'parent': 0, 'parameters': [{'name': 'interpolation', 'type': 'int', 'default': 1, 'level': 0, 'description': 'Interpolation algorithm between source image pixels', 'min': 0, 'max': 4, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': "{'enum': [{'name': 'NN', 'type': 'int', 'value': 0, 'srcline': 9, 'srcfile': '/home/leeandy/catkin_ws/src/image_pipeline/image_proc/cfg/Rectify.cfg', 'description': 'Nearest neighbor', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'Linear', 'type': 'int', 'value': 1, 'srcline': 10, 'srcfile': '/home/leeandy/catkin_ws/src/image_pipeline/image_proc/cfg/Rectify.cfg', 'description': 'Linear', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'Cubic', 'type': 'int', 'value': 2, 'srcline': 11, 'srcfile': '/home/leeandy/catkin_ws/src/image_pipeline/image_proc/cfg/Rectify.cfg', 'description': 'Cubic', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'Lanczos4', 'type': 'int', 'value': 4, 'srcline': 12, 'srcfile': '/home/leeandy/catkin_ws/src/image_pipeline/image_proc/cfg/Rectify.cfg', 'description': 'Lanczos4', 'ctype': 'int', 'cconsttype': 'const int'}], 'enum_description': 'interpolation type'}", 'ctype': 'int', 'cconsttype': 'const int'}], 'groups': [], 'srcline': 246, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'class': 'DEFAULT', 'parentclass': '', 'parentname': 'Default', 'field': 'default', 'upper': 'DEFAULT', 'lower': 'groups'}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

Rectify_NN = 0
Rectify_Linear = 1
Rectify_Cubic = 2
Rectify_Lanczos4 = 4
