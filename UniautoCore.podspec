Pod::Spec.new do |s|

#名称
s.name         = 'UniautoCore'

#版本号
s.version      = '1.0.0'

#许可证
s.license      = { :type => 'MIT' }

#项目主页地址
s.homepage     = 'https://github.com/czl620/UniautoCore'

#作者
s.authors      = { 'czl620' => '893419255@qq.com' }

#简介
s.summary      = 'A Utils framework for iOS.'

#项目的地址 （注意这里的tag位置，可以自己写也可以直接用s.version，但是与s.version一定要统一）
s.source       = { :git => 'https://github.com/czl620/UniautoCore.git', :tag => s.version }

#支持最小系统版本
s.platform     = :ios, '8.0'

#需要包含的源文件
s.source_files = 'UniautoCore/UniautoCore.framework/Headers/*.{h}'

#你的SDK路径
s.vendored_frameworks = 'UniautoCore/UniautoCore.framework'

#SDK头文件路径
s.public_header_files = 'UniautoCore/UniautoCore.framework/Headers/UniautoCore.h'

#依赖库
s.frameworks   = 'UIKit','Foundation'

s.dependency  'GTMBase64', '~> 1.0.0'

end
