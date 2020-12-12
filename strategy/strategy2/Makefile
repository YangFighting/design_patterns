cxx = g++
prom = strategy2
deps = $(shell find ./ -name "*.h")
src = $(shell find ./ -name "*.cpp")
obj = $(src:%.cpp=%.o) 
	 
$(prom): $(obj)
	    $(cxx) -o $(prom) $(obj)
		 
%.o: %.c $(deps)
	    $(cxx) -c $< -o $@
clean:
	    rm -rf $(obj) $(prom)
