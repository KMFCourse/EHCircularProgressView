#EHCircularProgressView.podspec
Pod::Spec.new do |s|
  s.name         = "EHCircularProgressView"
  s.version      = "0.1.0"
  s.summary      = "a progress view"
  s.homepage     = "https://github.com/KMFCourse/EHCircularProgressView.git"
  s.license      = 'MIT'
  s.author       = { "Conny Yue" => "yuechenwork@163.com" }
  s.platform     = :ios, "7.0"
  s.ios.deployment_target = "7.0"
  s.source       = { :git => "https://github.com/KMFCourse/EHCircularProgressView.git", :tag => 0.1.0}
  s.source_files  = 'EHCircularProgressView/*.{h,m}'
  s.requires_arc = true
end

