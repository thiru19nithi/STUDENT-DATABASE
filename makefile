outfile: main.o add_new.o save.o load.o show_all.o del_all.o del_one.c modify.o exit.o sort_list.o reverse.o copy_list.o 
	 cc main.c add_new.c save.c load.c show_all.c del_all.c del_one.c modify.c exit.c sort_list.c reverse.c copy_list.c -o outfile
main.o: main.c
	cc -c main.c
add_new.o: add_new.c
	   cc -c add_new.c
save.o: save.c
	cc -c save.c
load.o: load.c
	cc -c load.c
show_all.o: show_all.c
	cc -c show_all.c
del_all.o: del_all.c
	   cc -c del_all.c
del_one.o: del_one.c
	   cc -c del_one.c
modify.o: modify.c
	cc -c modify.c
exit.o: exit.c
	cc -c exit.c
sort_list.o: sort_list.c
	cc -c sort_list.c
reverse.o: reverse.c
	cc -c reverse.c
copy_list.o: copy_list.c
	cc -c copy_list.c

