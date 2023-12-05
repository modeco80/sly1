OBJS = crt0.o $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

clean-products:
	$(RM) -f $(OBJS) $(NAME)

include build/ee-common.mk
