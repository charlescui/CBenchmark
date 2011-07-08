#!/usr/bin/env ruby

require "sinatra/base"

$counter = 0

class MyHttp < Sinatra::Base
	get '/' do
	 	#puts Rack::Request.new(env).inspect
		$counter += 1
		puts "COUNTER : #{$counter}"
		"Hello!"
	end
end

MyHttp.run!
