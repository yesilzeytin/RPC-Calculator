struct numbers {

	int a;
	int b;
};

program ADD_PROG {

	version ADD_VERS {
		int add(numbers) = 1;
	}=1;

}=0x42427769;

program SUB_PROG {

	version SUB_VERS {
		int sub(numbers) = 1;
	}=1;

}=0x42427770;

program MUL_PROG {

	version MUL_VERS {
		int mul(numbers) = 1;
	}=1;

}=0x42427771;

program DIV_PROG {

	version DIV_VERS {
		int div(numbers) = 1;
	}=1;

}=0x42427772;
