namespace Config {

	namespace Offsets {

		char BytepatchEnable[] = { 0x41, 0xC6, 0x46, 0x51, 0x00, 0x90 };
		char BytepatchDisable[] = { 0x41, 0xC6, 0x46, 0x51, 0x01, 0x90 };
		char BytepatchNormal[] = { 0x34, 0x01, 0x41, 0x88, 0x46, 0x51 };
		
	}

}
