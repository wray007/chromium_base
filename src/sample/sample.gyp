#
{
  'targets': [
    {
      'target_name': 'sample',
      'type': 'executable',
      'include_dirs': [
        '..',
      ],
      'sources': [
        'main.cpp',
      ],
      'dependencies': [
        '<(DEPTH)/base/base.gyp:base',
      ],
      'msvs_settings': {
        'VCLinkerTool': {
          'SubSystem': '1',         # Set /SUBSYSTEM:CONSOLE
        },
      },
    },
  ],
}
