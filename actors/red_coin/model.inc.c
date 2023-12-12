Lights1 red_coin_red_lights = gdSPDefLights1(
	0x57, 0x0, 0x0,
	0xB2, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 red_coin_mario_logo_lights = gdSPDefLights1(
	0x57, 0x0, 0x0,
	0xB2, 0x0, 0x0, 0x28, 0x28, 0x28);

Gfx red_coin_mario_logo_ci4_aligner[] = {gsSPEndDisplayList()};
u8 red_coin_mario_logo_ci4[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x12, 0x12, 0x34, 0x44, 
	0x44, 0x43, 0x21, 0x21, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x02, 0x23, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x32, 0x20, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x22, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x22, 0x20, 0x00, 0x00, 
	0x00, 0x00, 0x22, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x22, 0x00, 0x00, 
	0x00, 0x02, 0x24, 0x44, 0x44, 0x24, 0x44, 0x44, 
	0x44, 0x44, 0x42, 0x44, 0x44, 0x42, 0x20, 0x00, 
	0x00, 0x02, 0x44, 0x44, 0x42, 0x12, 0x44, 0x44, 
	0x44, 0x44, 0x21, 0x24, 0x44, 0x44, 0x20, 0x00, 
	0x00, 0x22, 0x44, 0x44, 0x42, 0x02, 0x44, 0x44, 
	0x44, 0x44, 0x20, 0x24, 0x44, 0x44, 0x22, 0x00, 
	0x01, 0x24, 0x44, 0x44, 0x56, 0x00, 0x24, 0x44, 
	0x44, 0x42, 0x00, 0x65, 0x44, 0x44, 0x42, 0x10, 
	0x02, 0x34, 0x44, 0x44, 0x20, 0x00, 0x02, 0x44, 
	0x44, 0x20, 0x00, 0x02, 0x44, 0x44, 0x43, 0x20, 
	0x01, 0x44, 0x44, 0x45, 0x60, 0x00, 0x07, 0x14, 
	0x41, 0x70, 0x00, 0x06, 0x54, 0x44, 0x44, 0x10, 
	0x02, 0x44, 0x44, 0x42, 0x00, 0x00, 0x00, 0x72, 
	0x27, 0x00, 0x00, 0x00, 0x24, 0x44, 0x44, 0x20, 
	0x03, 0x44, 0x44, 0x21, 0x00, 0x11, 0x10, 0x01, 
	0x10, 0x01, 0x11, 0x00, 0x12, 0x44, 0x44, 0x30, 
	0x04, 0x44, 0x44, 0x20, 0x00, 0x24, 0x22, 0x00, 
	0x00, 0x22, 0x42, 0x00, 0x02, 0x44, 0x44, 0x40, 
	0x04, 0x44, 0x45, 0x60, 0x00, 0x24, 0x42, 0x10, 
	0x01, 0x24, 0x42, 0x00, 0x06, 0x44, 0x44, 0x40, 
	0x04, 0x44, 0x42, 0x00, 0x06, 0x44, 0x44, 0x16, 
	0x61, 0x44, 0x44, 0x60, 0x00, 0x24, 0x44, 0x40, 
	0x04, 0x44, 0x47, 0x00, 0x02, 0x44, 0x44, 0x41, 
	0x14, 0x44, 0x44, 0x20, 0x00, 0x64, 0x44, 0x40, 
	0x04, 0x44, 0x20, 0x00, 0x65, 0x44, 0x44, 0x43, 
	0x34, 0x44, 0x44, 0x56, 0x00, 0x02, 0x44, 0x40, 
	0x04, 0x44, 0x10, 0x00, 0x14, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x41, 0x00, 0x01, 0x44, 0x40, 
	0x03, 0x42, 0x10, 0x00, 0x24, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x42, 0x00, 0x01, 0x24, 0x30, 
	0x02, 0x44, 0x21, 0x01, 0x54, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x45, 0x60, 0x12, 0x44, 0x20, 
	0x01, 0x44, 0x42, 0x61, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x11, 0x24, 0x44, 0x10, 
	0x02, 0x34, 0x44, 0x22, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x22, 0x44, 0x43, 0x20, 
	0x01, 0x24, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x42, 0x10, 
	0x00, 0x22, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x22, 0x00, 
	0x00, 0x02, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x20, 0x00, 
	0x00, 0x02, 0x24, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x42, 0x20, 0x00, 
	0x00, 0x00, 0x22, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x22, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x22, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x22, 0x20, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x02, 0x23, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x32, 0x20, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x12, 0x12, 0x34, 0x44, 
	0x44, 0x43, 0x21, 0x21, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx red_coin_mario_logo_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 red_coin_mario_logo_ci4_pal_rgba16[] = {
	0x00, 0x00, 0xff, 0x7a, 0xff, 0xbc, 0xff, 0xbd, 
	0xff, 0xff, 0xff, 0xfe, 0xff, 0x38, 0xfe, 0xf6, 
	
};

Gfx red_coin_metal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 red_coin_metal_rgba16[] = {
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x43, 
	0x08, 0x43, 0x10, 0x85, 0x20, 0xc7, 0x18, 0x85, 
	0x08, 0x43, 0x10, 0x41, 0x08, 0x01, 0x08, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x08, 0x01, 0x18, 0x85, 0x41, 0xcb, 
	0x5a, 0x51, 0x6a, 0x53, 0x72, 0x55, 0x61, 0xd3, 
	0x28, 0xc9, 0x28, 0xc7, 0x20, 0xc7, 0x18, 0x45, 
	0x10, 0x43, 0x08, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x41, 
	0x18, 0x85, 0x41, 0xcd, 0x49, 0xcf, 0x7b, 0x1f, 
	0x6a, 0xdd, 0x72, 0x9d, 0x72, 0x9f, 0x7a, 0xa1, 
	0x72, 0x5b, 0x62, 0x57, 0x39, 0x8b, 0x4a, 0x55, 
	0x31, 0xcf, 0x20, 0xc7, 0x18, 0xc7, 0x08, 0x43, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x08, 0x41, 0x29, 0x07, 
	0x29, 0x49, 0x49, 0x8f, 0x83, 0xe9, 0x7c, 0xf5, 
	0x6c, 0xb3, 0x64, 0xb3, 0x64, 0xb3, 0x74, 0xf5, 
	0x84, 0xf5, 0x84, 0x6d, 0x73, 0x21, 0x8c, 0x27, 
	0x7b, 0xa3, 0x31, 0x4d, 0x29, 0x0b, 0x28, 0xc9, 
	0x10, 0x43, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x10, 0x83, 0x20, 0xc7, 0x4a, 0x0f, 
	0x62, 0x13, 0x7b, 0xeb, 0x5c, 0xb3, 0x4c, 0x31, 
	0x4b, 0xf1, 0x4c, 0x2f, 0x5c, 0x71, 0x6c, 0xb5, 
	0x8d, 0x79, 0x9d, 0xb9, 0xae, 0x3b, 0xc6, 0x3d, 
	0xce, 0x7d, 0xad, 0x31, 0x73, 0x1d, 0x39, 0x49, 
	0x31, 0x49, 0x10, 0x43, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x10, 0x43, 0x39, 0x49, 0x29, 0x49, 0x6a, 0xdd, 
	0x74, 0x2d, 0x4c, 0x31, 0x43, 0xef, 0x3b, 0x6d, 
	0x43, 0xaf, 0x54, 0x31, 0x64, 0x73, 0x74, 0xf5, 
	0x95, 0xb9, 0x95, 0xb9, 0xae, 0x3b, 0xc6, 0x7d, 
	0xd6, 0xbd, 0xce, 0xbb, 0xc6, 0x3b, 0x5a, 0x57, 
	0x41, 0xd1, 0x39, 0x4b, 0x08, 0x43, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x10, 0x41, 
	0x18, 0x83, 0x31, 0x4b, 0x63, 0x63, 0x85, 0x35, 
	0x54, 0x31, 0x3b, 0xad, 0x3b, 0x6d, 0x3b, 0xab, 
	0x43, 0xef, 0x4b, 0xef, 0x54, 0x71, 0x64, 0xb5, 
	0x85, 0x77, 0xa6, 0x3b, 0xbe, 0x7d, 0xc6, 0xbf, 
	0xce, 0xbf, 0xd6, 0xbf, 0xd6, 0xbd, 0x84, 0x6b, 
	0x3a, 0x17, 0x4a, 0x15, 0x31, 0x49, 0x18, 0x45, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x41, 0x10, 0x43, 
	0x28, 0xc9, 0x94, 0x69, 0x9d, 0xfb, 0x6c, 0xf5, 
	0x43, 0xaf, 0x3b, 0x6d, 0x3b, 0xaf, 0x43, 0xf1, 
	0x54, 0x71, 0x5c, 0xb3, 0x64, 0xb3, 0x74, 0xf5, 
	0x8c, 0xf3, 0x8c, 0x2b, 0xc6, 0x3b, 0xc6, 0x7d, 
	0xce, 0xff, 0xce, 0xbf, 0xce, 0xbf, 0xb5, 0xf7, 
	0x31, 0xd7, 0x21, 0x4f, 0x39, 0xd1, 0x21, 0x07, 
	0x08, 0x03, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x18, 0x85, 0x18, 0x43, 
	0x8b, 0xe3, 0xbe, 0x7b, 0x95, 0xfb, 0x5c, 0xb3, 
	0x4c, 0x33, 0x54, 0x73, 0x5c, 0xb3, 0x6c, 0xb3, 
	0x74, 0xf3, 0x75, 0x35, 0x83, 0xe9, 0x93, 0x67, 
	0x8b, 0x1f, 0x42, 0x11, 0xad, 0x33, 0xbd, 0xf7, 
	0xc6, 0x79, 0xbd, 0xf9, 0xad, 0xb7, 0xad, 0xb5, 
	0x31, 0xd5, 0x21, 0x51, 0x29, 0x53, 0x4a, 0x0f, 
	0x20, 0x85, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x10, 0x83, 0x42, 0x11, 
	0xd6, 0xbb, 0xc6, 0x7d, 0xa5, 0xfb, 0x85, 0x79, 
	0x85, 0x79, 0x8d, 0x77, 0x84, 0x6f, 0x8a, 0xa1, 
	0x82, 0xdd, 0x94, 0x6f, 0x62, 0x59, 0x61, 0xd3, 
	0x51, 0xd1, 0x4a, 0x53, 0x41, 0x8d, 0x83, 0x5f, 
	0x6b, 0x21, 0x4a, 0x5b, 0x42, 0x1b, 0x39, 0xd7, 
	0x21, 0x0b, 0x21, 0x51, 0x28, 0xcd, 0x21, 0x0b, 
	0x41, 0x89, 0x18, 0x85, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x08, 0x41, 0x18, 0x85, 0x94, 0x69, 
	0xde, 0xfd, 0xce, 0xbd, 0xbe, 0x7b, 0xb6, 0x7d, 
	0xb6, 0x3d, 0xae, 0x3b, 0x52, 0x99, 0x52, 0x13, 
	0x49, 0xcd, 0x59, 0xd3, 0x61, 0xd3, 0x71, 0xd5, 
	0x29, 0x09, 0x52, 0x97, 0x20, 0x85, 0x31, 0x49, 
	0x52, 0x97, 0x31, 0xd7, 0x29, 0x95, 0x29, 0x51, 
	0x29, 0x4f, 0x29, 0x51, 0x29, 0x93, 0x18, 0x87, 
	0x31, 0x49, 0x49, 0x4f, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x08, 0x41, 0x39, 0x8b, 0xb5, 0x2f, 
	0xde, 0xfd, 0xce, 0xbf, 0xce, 0xbd, 0xce, 0xbf, 
	0xd6, 0xbd, 0xb5, 0x31, 0x31, 0x4d, 0x29, 0x09, 
	0x42, 0x4f, 0x29, 0x49, 0x5a, 0x0f, 0x6a, 0x97, 
	0x10, 0x43, 0x21, 0x0b, 0x31, 0x09, 0x31, 0x4d, 
	0x5a, 0x93, 0x29, 0x93, 0x18, 0xcd, 0x31, 0x53, 
	0x29, 0x91, 0x18, 0xcd, 0x31, 0x95, 0x21, 0x0d, 
	0x08, 0x41, 0x8a, 0x9d, 0x08, 0x03, 0x00, 0x01, 
	0x00, 0x41, 0x08, 0x43, 0x83, 0xdf, 0xbd, 0x71, 
	0xde, 0xfd, 0xd6, 0xfd, 0xd6, 0xbd, 0xde, 0xfd, 
	0xc6, 0x37, 0x83, 0xe3, 0x30, 0x87, 0x18, 0xc5, 
	0x20, 0xc7, 0x18, 0xc7, 0x62, 0xd3, 0x6b, 0x17, 
	0x18, 0xc5, 0x29, 0x4f, 0x39, 0x49, 0x21, 0x09, 
	0x5a, 0xd3, 0x39, 0x91, 0x08, 0x45, 0x29, 0x0d, 
	0x29, 0x51, 0x21, 0x0f, 0x31, 0x4f, 0x20, 0x89, 
	0x08, 0x43, 0x7a, 0x19, 0x20, 0x47, 0x00, 0x01, 
	0x08, 0x43, 0x18, 0x87, 0xbd, 0x71, 0xbd, 0xb1, 
	0xde, 0xfd, 0xde, 0xfd, 0xde, 0xbd, 0xbd, 0xf5, 
	0xb5, 0x6d, 0x52, 0x53, 0x20, 0xc5, 0x00, 0x01, 
	0x10, 0x83, 0x18, 0xc5, 0x31, 0xcb, 0x52, 0x11, 
	0x28, 0xc7, 0x18, 0x87, 0x28, 0xc7, 0x20, 0xc7, 
	0x5a, 0x4f, 0x39, 0x8b, 0x00, 0x03, 0x10, 0x47, 
	0x28, 0xcb, 0x31, 0x8d, 0x39, 0xcf, 0x20, 0x87, 
	0x10, 0x87, 0x49, 0x0d, 0x38, 0x49, 0x00, 0x01, 
	0x08, 0x43, 0x10, 0x43, 0xac, 0x67, 0xc5, 0xad, 
	0xd6, 0x71, 0xd6, 0x73, 0xcd, 0xf3, 0xac, 0x25, 
	0xce, 0x37, 0x41, 0x4b, 0x29, 0x07, 0x08, 0x01, 
	0x10, 0x43, 0x10, 0x83, 0x41, 0xc7, 0x18, 0xc7, 
	0x20, 0x43, 0x18, 0x45, 0x40, 0xc9, 0x61, 0x51, 
	0x92, 0x9f, 0x31, 0x09, 0x08, 0x03, 0x10, 0x89, 
	0x10, 0x45, 0x28, 0x89, 0x20, 0xc9, 0x10, 0x45, 
	0x08, 0x45, 0x49, 0x4f, 0x48, 0x45, 0x00, 0x01, 
	0x08, 0x03, 0x08, 0x83, 0x82, 0xd9, 0xce, 0x2d, 
	0xcd, 0xe7, 0xcd, 0xe7, 0xcd, 0xed, 0x8b, 0x5b, 
	0xa3, 0xe3, 0x20, 0x87, 0x18, 0x87, 0x08, 0x01, 
	0x20, 0xc7, 0x20, 0x85, 0x41, 0x45, 0x08, 0x03, 
	0x08, 0x03, 0x10, 0x05, 0x61, 0x11, 0x78, 0xcf, 
	0x89, 0x4d, 0x93, 0x25, 0x10, 0x45, 0x10, 0x45, 
	0x08, 0x43, 0x18, 0x45, 0x19, 0x0b, 0x10, 0x45, 
	0x08, 0x43, 0x51, 0x93, 0x50, 0x87, 0x00, 0x01, 
	0x10, 0x43, 0x08, 0x45, 0x41, 0x49, 0xc5, 0x1d, 
	0xc5, 0xe9, 0xc5, 0xab, 0xb4, 0xd9, 0x6a, 0x91, 
	0x20, 0x87, 0x08, 0x83, 0x10, 0x43, 0x00, 0x01, 
	0x8a, 0xdb, 0x82, 0x59, 0x61, 0x4d, 0x38, 0x89, 
	0x00, 0x43, 0x08, 0x43, 0x41, 0x09, 0x70, 0xcd, 
	0x81, 0x0d, 0xa2, 0xe5, 0x61, 0x95, 0x51, 0x11, 
	0x28, 0xc9, 0x5a, 0x59, 0x31, 0xd3, 0x49, 0x91, 
	0x30, 0xc9, 0x69, 0x93, 0x58, 0xc9, 0x00, 0x01, 
	0x20, 0x87, 0x08, 0x43, 0x08, 0x83, 0x7b, 0x4d, 
	0x9c, 0x5b, 0x9c, 0x9b, 0x6b, 0x0d, 0x41, 0x09, 
	0x10, 0x43, 0x00, 0x43, 0x10, 0x85, 0x20, 0xc5, 
	0x8b, 0x1d, 0x7a, 0x95, 0x82, 0x91, 0x59, 0x8b, 
	0x08, 0x03, 0x10, 0x83, 0x28, 0xc5, 0x79, 0x95, 
	0x91, 0x99, 0xb3, 0x67, 0xb3, 0xab, 0xb2, 0xdb, 
	0x92, 0x61, 0x9d, 0x33, 0x94, 0xef, 0x8b, 0xe7, 
	0x92, 0x5f, 0x81, 0xdb, 0x48, 0x87, 0x00, 0x01, 
	0x18, 0x47, 0x10, 0x83, 0x08, 0x03, 0x51, 0x89, 
	0x9c, 0x99, 0xb5, 0x1f, 0x83, 0x93, 0x39, 0x07, 
	0x10, 0x83, 0x00, 0x01, 0x08, 0x83, 0x20, 0xc7, 
	0x28, 0x87, 0x31, 0x49, 0x39, 0x89, 0x39, 0x8b, 
	0x08, 0x43, 0x39, 0xcf, 0x5a, 0x93, 0x9b, 0x61, 
	0x89, 0x93, 0xa2, 0x61, 0xc4, 0x6b, 0xb3, 0x57, 
	0xb3, 0x69, 0xb5, 0xb7, 0xad, 0xb5, 0xb3, 0xe9, 
	0xaa, 0x9f, 0xa2, 0xa3, 0x28, 0x87, 0x00, 0x01, 
	0x00, 0x43, 0x41, 0x8f, 0x08, 0x43, 0x39, 0x09, 
	0x9c, 0x57, 0xc5, 0xa1, 0xa4, 0x95, 0x21, 0x03, 
	0x19, 0x05, 0x21, 0x43, 0x20, 0xc5, 0x42, 0x0f, 
	0x20, 0x43, 0x08, 0x43, 0x41, 0xcd, 0x31, 0x4b, 
	0x10, 0x85, 0x42, 0x11, 0x73, 0x19, 0xa4, 0xa5, 
	0x79, 0x4f, 0xbb, 0xdf, 0xcd, 0x1d, 0xa2, 0x61, 
	0xab, 0xab, 0xb5, 0xf7, 0xb5, 0xf7, 0xab, 0x21, 
	0xb3, 0x1f, 0x9a, 0x5f, 0x10, 0x43, 0x00, 0x01, 
	0x00, 0x01, 0x6a, 0x15, 0x08, 0x03, 0x10, 0x83, 
	0x52, 0x8d, 0xac, 0x97, 0x9c, 0x53, 0x83, 0xd5, 
	0x39, 0x87, 0x42, 0x07, 0x31, 0x47, 0x18, 0xc5, 
	0x08, 0x01, 0x08, 0x43, 0x29, 0x07, 0x08, 0x01, 
	0x10, 0x83, 0x31, 0x8d, 0x41, 0xcd, 0x4a, 0x0d, 
	0x79, 0x93, 0xab, 0x19, 0xcc, 0xdf, 0x92, 0xdf, 
	0x72, 0x9b, 0x94, 0xab, 0xb4, 0xad, 0xaa, 0xa3, 
	0xab, 0x25, 0x81, 0xd7, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x41, 0x49, 0x31, 0x4b, 0x00, 0x03, 
	0x21, 0x45, 0xac, 0x97, 0x7b, 0x91, 0x94, 0x15, 
	0x93, 0xd7, 0x29, 0x43, 0x18, 0x81, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x08, 0x43, 0x08, 0x41, 
	0x10, 0x85, 0x18, 0x87, 0x08, 0x43, 0x18, 0x85, 
	0x92, 0xdd, 0xb4, 0xad, 0xcd, 0xb7, 0x59, 0xd7, 
	0x31, 0x0d, 0x5a, 0x13, 0xa2, 0xa1, 0xc4, 0x25, 
	0x9a, 0x19, 0x49, 0x0b, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x08, 0x01, 0x6a, 0x11, 0x08, 0x41, 
	0x39, 0xc7, 0x7b, 0x53, 0x8c, 0x13, 0x6b, 0x11, 
	0x62, 0xcd, 0x31, 0x05, 0x20, 0xc3, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x08, 0x45, 
	0x10, 0x89, 0x20, 0x47, 0x08, 0x01, 0x20, 0x87, 
	0x38, 0x87, 0x93, 0x63, 0xbc, 0xf3, 0x20, 0x87, 
	0x08, 0x43, 0x49, 0x91, 0xb3, 0xa1, 0xbc, 0x19, 
	0x8a, 0x17, 0x08, 0x43, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x41, 0x09, 0x18, 0x85, 
	0x4a, 0x47, 0x41, 0x87, 0x94, 0x15, 0x5a, 0x8d, 
	0x52, 0x4b, 0x20, 0xc3, 0x10, 0x81, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x08, 0x01, 0x00, 0x41, 
	0x08, 0x03, 0x00, 0x01, 0x00, 0x03, 0x08, 0x01, 
	0x10, 0x03, 0x41, 0x4f, 0x39, 0x0d, 0x18, 0x45, 
	0x6a, 0x9d, 0xbc, 0xaf, 0xb3, 0x93, 0x9a, 0x13, 
	0x39, 0x4d, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x51, 0x8f, 
	0x41, 0x8b, 0x41, 0xc9, 0x41, 0xc9, 0x31, 0x03, 
	0x52, 0x0b, 0x28, 0xc7, 0x08, 0x41, 0x08, 0x01, 
	0x00, 0x01, 0x08, 0x01, 0x00, 0x03, 0x08, 0x01, 
	0x08, 0x03, 0x08, 0x01, 0x08, 0x01, 0x08, 0x01, 
	0x00, 0x01, 0x08, 0x41, 0x00, 0x03, 0x49, 0x51, 
	0xbc, 0xaf, 0xb4, 0x29, 0x92, 0x59, 0x62, 0x13, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x18, 0x85, 
	0x31, 0x07, 0x31, 0x09, 0x08, 0x43, 0x31, 0x05, 
	0x18, 0x83, 0x08, 0x03, 0x10, 0x41, 0x10, 0x01, 
	0x08, 0x01, 0x08, 0x01, 0x18, 0x03, 0x08, 0x01, 
	0x08, 0x43, 0x10, 0x43, 0x10, 0x01, 0x08, 0x01, 
	0x08, 0x01, 0x08, 0x01, 0x10, 0x43, 0x6a, 0x17, 
	0xa3, 0xa5, 0x7a, 0x57, 0x83, 0x5b, 0x18, 0x85, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x20, 0x87, 0x31, 0x09, 0x08, 0x43, 0x08, 0x41, 
	0x08, 0x41, 0x00, 0x01, 0x00, 0x01, 0x10, 0x01, 
	0x10, 0x01, 0x10, 0x01, 0x18, 0x03, 0x10, 0x03, 
	0x28, 0x43, 0x20, 0x45, 0x10, 0x01, 0x10, 0x01, 
	0x08, 0x01, 0x08, 0x01, 0x10, 0x41, 0x49, 0x4f, 
	0x5a, 0x13, 0x62, 0xd3, 0x21, 0x09, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x20, 0x85, 0x28, 0xc5, 0x00, 0x01, 
	0x08, 0x43, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x10, 0x03, 0x20, 0x43, 0x08, 0x01, 
	0x10, 0x01, 0x18, 0x03, 0x08, 0x43, 0x08, 0x01, 
	0x08, 0x03, 0x08, 0x43, 0x18, 0x83, 0x28, 0xc7, 
	0x62, 0x95, 0x29, 0x4b, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x10, 0x83, 0x20, 0x85, 
	0x10, 0x43, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x08, 0x01, 0x00, 0x01, 0x00, 0x41, 0x00, 0x01, 
	0x10, 0x03, 0x00, 0x01, 0x08, 0x03, 0x08, 0x03, 
	0x08, 0x43, 0x18, 0x87, 0x31, 0x4b, 0x39, 0x8d, 
	0x10, 0x45, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x08, 0x01, 
	0x10, 0x43, 0x29, 0x05, 0x20, 0xc5, 0x20, 0x85, 
	0x08, 0x43, 0x00, 0x01, 0x00, 0x03, 0x00, 0x03, 
	0x10, 0x87, 0x08, 0x45, 0x18, 0x87, 0x18, 0x85, 
	0x10, 0x83, 0x21, 0x07, 0x10, 0x85, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x08, 0x41, 0x18, 0x83, 0x29, 0x07, 
	0x31, 0x47, 0x31, 0x49, 0x10, 0x85, 0x10, 0x43, 
	0x18, 0x85, 0x10, 0x85, 0x08, 0x43, 0x08, 0x43, 
	0x08, 0x41, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x03, 0x08, 0x43, 0x18, 0x85, 0x08, 0x43, 
	0x10, 0x43, 0x08, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
	
};

Vtx red_coin_Icosphere_mesh_layer_1_vtx_0[93] = {
	{{ {32, 75, -14}, 0, {492, -38}, {89, 82, 217, 255} }},
	{{ {24, 64, -35}, 0, {1114, -38}, {65, 51, 159, 255} }},
	{{ {11, 85, -21}, 0, {803, -576}, {28, 109, 197, 255} }},
	{{ {21, 86, 5}, 0, {-129, -38}, {57, 113, 14, 255} }},
	{{ {11, 85, -21}, 0, {182, -576}, {28, 109, 197, 255} }},
	{{ {15, 8, 22}, 0, {170, 1008}, {41, 152, 61, 255} }},
	{{ {30, 27, 29}, 0, {217, 927}, {83, 204, 81, 255} }},
	{{ {4, 22, 39}, 0, {124, 927}, {11, 192, 109, 255} }},
	{{ {17, 48, 42}, 0, {170, 847}, {46, 6, 118, 255} }},
	{{ {37, 51, 27}, 0, {263, 847}, {101, 15, 76, 255} }},
	{{ {23, 72, 29}, 0, {217, 766}, {64, 73, 82, 255} }},
	{{ {-3, 68, 40}, 0, {124, 766}, {248, 62, 111, 255} }},
	{{ {3, 85, 23}, 0, {170, 686}, {7, 110, 63, 255} }},
	{{ {21, 86, 5}, 0, {263, 686}, {57, 113, 14, 255} }},
	{{ {-7, 91, 0}, 0, {217, 605}, {237, 126, 1, 255} }},
	{{ {11, 85, -21}, 0, {310, 605}, {28, 109, 197, 255} }},
	{{ {-7, 91, 0}, 0, {217, 605}, {237, 126, 1, 255} }},
	{{ {11, 85, -21}, 0, {310, 605}, {28, 109, 197, 255} }},
	{{ {-14, 83, -22}, 0, {263, 524}, {215, 104, 195, 255} }},
	{{ {-3, 68, 40}, 0, {124, 766}, {248, 62, 111, 255} }},
	{{ {3, 85, 23}, 0, {170, 686}, {7, 110, 63, 255} }},
	{{ {-21, 79, 22}, 0, {77, 686}, {196, 94, 61, 255} }},
	{{ {-7, 91, 0}, 0, {124, 605}, {237, 126, 1, 255} }},
	{{ {-32, 78, -5}, 0, {31, 605}, {167, 90, 244, 255} }},
	{{ {-14, 83, -22}, 0, {77, 524}, {215, 104, 195, 255} }},
	{{ {-39, 63, 14}, 0, {-16, 686}, {146, 50, 40, 255} }},
	{{ {-28, 55, 35}, 0, {31, 766}, {178, 26, 97, 255} }},
	{{ {-8, 44, 45}, 0, {77, 847}, {234, 252, 125, 255} }},
	{{ {17, 48, 42}, 0, {170, 847}, {46, 6, 118, 255} }},
	{{ {4, 22, 39}, 0, {124, 927}, {11, 192, 109, 255} }},
	{{ {37, 51, 27}, 0, {263, 847}, {101, 15, 76, 255} }},
	{{ {30, 27, 29}, 0, {310, 927}, {83, 204, 81, 255} }},
	{{ {45, 38, 7}, 0, {356, 847}, {124, 236, 21, 255} }},
	{{ {32, 13, 4}, 0, {403, 927}, {89, 166, 12, 255} }},
	{{ {15, 8, 22}, 0, {356, 1008}, {41, 152, 61, 255} }},
	{{ {40, 27, -15}, 0, {449, 847}, {110, 206, 216, 255} }},
	{{ {15, 8, 22}, 0, {915, 1008}, {41, 152, 61, 255} }},
	{{ {4, 22, 39}, 0, {961, 927}, {11, 192, 109, 255} }},
	{{ {-10, 6, 21}, 0, {868, 927}, {228, 147, 59, 255} }},
	{{ {-23, 27, 34}, 0, {915, 847}, {191, 205, 97, 255} }},
	{{ {-8, 44, 45}, 0, {1008, 847}, {234, 252, 125, 255} }},
	{{ {-28, 55, 35}, 0, {961, 766}, {178, 26, 97, 255} }},
	{{ {-32, 16, 14}, 0, {822, 847}, {167, 174, 39, 255} }},
	{{ {15, 8, 22}, 0, {729, 1008}, {41, 152, 61, 255} }},
	{{ {-10, 6, 21}, 0, {775, 927}, {228, 147, 59, 255} }},
	{{ {7, 0, -1}, 0, {682, 927}, {19, 130, 255, 255} }},
	{{ {7, 0, -1}, 0, {682, 927}, {19, 130, 255, 255} }},
	{{ {-10, 6, 21}, 0, {775, 927}, {228, 147, 59, 255} }},
	{{ {-20, 5, -5}, 0, {729, 847}, {199, 143, 242, 255} }},
	{{ {-32, 16, 14}, 0, {822, 847}, {167, 174, 39, 255} }},
	{{ {-2, 6, -23}, 0, {636, 847}, {249, 146, 193, 255} }},
	{{ {-23, 19, -30}, 0, {682, 766}, {192, 183, 174, 255} }},
	{{ {3, 23, -40}, 0, {589, 766}, {8, 194, 145, 255} }},
	{{ {-16, 43, -43}, 0, {636, 686}, {210, 250, 138, 255} }},
	{{ {-36, 40, -28}, 0, {729, 686}, {155, 241, 180, 255} }},
	{{ {-30, 64, -29}, 0, {682, 605}, {173, 52, 175, 255} }},
	{{ {-4, 68, -40}, 0, {589, 605}, {245, 64, 147, 255} }},
	{{ {-14, 83, -22}, 0, {636, 524}, {215, 104, 195, 255} }},
	{{ {8, 47, -45}, 0, {543, 686}, {22, 4, 131, 255} }},
	{{ {28, 36, -35}, 0, {496, 766}, {78, 230, 159, 255} }},
	{{ {24, 64, -35}, 0, {449, 686}, {65, 51, 159, 255} }},
	{{ {-4, 68, -40}, 0, {496, 605}, {245, 64, 147, 255} }},
	{{ {11, 85, -21}, 0, {403, 605}, {28, 109, 197, 255} }},
	{{ {24, 64, -35}, 0, {449, 686}, {65, 51, 159, 255} }},
	{{ {-4, 68, -40}, 0, {496, 605}, {245, 64, 147, 255} }},
	{{ {-14, 83, -22}, 0, {449, 524}, {215, 104, 195, 255} }},
	{{ {28, 36, -35}, 0, {496, 766}, {78, 230, 159, 255} }},
	{{ {22, 12, -22}, 0, {543, 847}, {60, 162, 195, 255} }},
	{{ {3, 23, -40}, 0, {589, 766}, {8, 194, 145, 255} }},
	{{ {40, 27, -15}, 0, {449, 847}, {110, 206, 216, 255} }},
	{{ {32, 13, 4}, 0, {496, 927}, {89, 166, 12, 255} }},
	{{ {7, 0, -1}, 0, {589, 927}, {19, 130, 255, 255} }},
	{{ {15, 8, 22}, 0, {543, 1008}, {41, 152, 61, 255} }},
	{{ {-2, 6, -23}, 0, {636, 847}, {249, 146, 193, 255} }},
	{{ {-36, 40, -28}, 0, {729, 686}, {155, 241, 180, 255} }},
	{{ {-44, 53, -8}, 0, {822, 686}, {132, 20, 235, 255} }},
	{{ {-30, 64, -29}, 0, {775, 605}, {173, 52, 175, 255} }},
	{{ {-32, 78, -5}, 0, {868, 605}, {167, 90, 244, 255} }},
	{{ {-44, 53, -8}, 0, {822, 686}, {132, 20, 235, 255} }},
	{{ {-39, 63, 14}, 0, {915, 686}, {146, 50, 40, 255} }},
	{{ {-32, 78, -5}, 0, {868, 605}, {167, 90, 244, 255} }},
	{{ {-30, 64, -29}, 0, {775, 605}, {173, 52, 175, 255} }},
	{{ {-14, 83, -22}, 0, {822, 524}, {215, 104, 195, 255} }},
	{{ {-32, 16, 14}, 0, {494, 987}, {167, 174, 39, 255} }},
	{{ {-23, 27, 34}, 0, {1077, 987}, {191, 205, 97, 255} }},
	{{ {-42, 39, 16}, 0, {785, 482}, {139, 238, 46, 255} }},
	{{ {-28, 55, 35}, 0, {1368, 482}, {178, 26, 97, 255} }},
	{{ {-39, 63, 14}, 0, {1077, -23}, {146, 50, 40, 255} }},
	{{ {-44, 53, -8}, 0, {494, -23}, {132, 20, 235, 255} }},
	{{ {-40, 25, -8}, 0, {202, 482}, {145, 199, 234, 255} }},
	{{ {-36, 40, -28}, 0, {-89, -23}, {155, 241, 180, 255} }},
	{{ {-23, 19, -30}, 0, {-381, 482}, {192, 183, 174, 255} }},
	{{ {-20, 5, -5}, 0, {-89, 987}, {199, 143, 242, 255} }},
};

Gfx red_coin_Icosphere_mesh_layer_1_tri_0[] = {
	gsSPVertex(red_coin_Icosphere_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(6, 9, 8, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 8, 10, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(10, 13, 12, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(red_coin_Icosphere_mesh_layer_1_vtx_0 + 16, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 5, 7, 0),
	gsSP1Triangle(10, 5, 9, 0),
	gsSP1Triangle(10, 3, 5, 0),
	gsSP1Triangle(11, 3, 10, 0),
	gsSP1Triangle(11, 12, 3, 0),
	gsSP1Triangle(13, 12, 11, 0),
	gsSPVertex(red_coin_Icosphere_mesh_layer_1_vtx_0 + 30, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(2, 3, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(8, 9, 12, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(red_coin_Icosphere_mesh_layer_1_vtx_0 + 46, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(0, 2, 4, 0),
	gsSP1Triangle(4, 2, 5, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(5, 8, 7, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(10, 7, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 7, 10, 0),
	gsSP1Triangle(6, 7, 12, 0),
	gsSP1Triangle(13, 6, 12, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(14, 12, 15, 0),
	gsSPVertex(red_coin_Icosphere_mesh_layer_1_vtx_0 + 62, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 5, 4, 0),
	gsSP1Triangle(8, 5, 7, 0),
	gsSP1Triangle(8, 9, 5, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(9, 11, 5, 0),
	gsSP1Triangle(5, 11, 6, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(red_coin_Icosphere_mesh_layer_1_vtx_0 + 78, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(7, 9, 10, 0),
	gsSP1Triangle(11, 7, 10, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(13, 14, 11, 0),
	gsSP1Triangle(14, 5, 11, 0),
	gsSP1Triangle(5, 7, 11, 0),
	gsSPEndDisplayList(),
};

Vtx red_coin_Icosphere_mesh_layer_1_vtx_1[10] = {
	{{ {37, 51, 27}, 0, {-99, 1012}, {101, 15, 76, 255} }},
	{{ {45, 38, 7}, 0, {492, 1012}, {124, 236, 21, 255} }},
	{{ {41, 66, 8}, 0, {197, 500}, {111, 57, 22, 255} }},
	{{ {42, 52, -17}, 0, {788, 500}, {117, 18, 210, 255} }},
	{{ {40, 27, -15}, 0, {1084, 1012}, {110, 206, 216, 255} }},
	{{ {28, 36, -35}, 0, {1379, 500}, {78, 230, 159, 255} }},
	{{ {24, 64, -35}, 0, {1084, -12}, {65, 51, 159, 255} }},
	{{ {32, 75, -14}, 0, {492, -12}, {89, 82, 217, 255} }},
	{{ {21, 86, 5}, 0, {-99, -12}, {57, 113, 14, 255} }},
	{{ {23, 72, 29}, 0, {-395, 500}, {64, 73, 82, 255} }},
};

Gfx red_coin_Icosphere_mesh_layer_1_tri_1[] = {
	gsSPVertex(red_coin_Icosphere_mesh_layer_1_vtx_1 + 0, 10, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(3, 6, 7, 0),
	gsSP1Triangle(2, 3, 7, 0),
	gsSP1Triangle(2, 7, 8, 0),
	gsSP1Triangle(9, 2, 8, 0),
	gsSP1Triangle(0, 2, 9, 0),
	gsSPEndDisplayList(),
};

Vtx red_coin_Icosphere_mesh_layer_1_vtx_2[58] = {
	{{ {-11, 69, -35}, 0, {495, -404}, {67, 223, 153, 255} }},
	{{ {-14, 76, -39}, 0, {495, -529}, {67, 223, 153, 255} }},
	{{ {0, 86, -33}, 0, {325, -529}, {67, 223, 153, 255} }},
	{{ {-7, 73, -34}, 0, {442, -425}, {67, 223, 153, 255} }},
	{{ {3, 78, -29}, 0, {325, -400}, {67, 223, 153, 255} }},
	{{ {2, 84, -22}, 0, {239, -426}, {120, 40, 243, 255} }},
	{{ {3, 78, -29}, 0, {325, -400}, {120, 40, 243, 255} }},
	{{ {0, 86, -33}, 0, {325, -529}, {120, 40, 243, 255} }},
	{{ {2, 87, -13}, 0, {154, -400}, {120, 40, 243, 255} }},
	{{ {-1, 94, -17}, 0, {154, -529}, {120, 40, 243, 255} }},
	{{ {-9, 88, -7}, 0, {37, -425}, {52, 74, 90, 255} }},
	{{ {2, 87, -13}, 0, {154, -400}, {52, 74, 90, 255} }},
	{{ {-1, 94, -17}, 0, {154, -529}, {52, 74, 90, 255} }},
	{{ {-14, 87, -4}, 0, {-17, -404}, {52, 74, 90, 255} }},
	{{ {-17, 94, -8}, 0, {-17, -529}, {52, 74, 90, 255} }},
	{{ {-27, 79, -10}, 0, {-168, -420}, {189, 33, 103, 255} }},
	{{ {-14, 87, -4}, 0, {-17, -404}, {189, 33, 103, 255} }},
	{{ {-17, 94, -8}, 0, {-17, -529}, {189, 33, 103, 255} }},
	{{ {-28, 78, -10}, 0, {-187, -411}, {189, 33, 103, 255} }},
	{{ {-31, 85, -14}, 0, {-187, -529}, {189, 33, 103, 255} }},
	{{ {-17, 94, -8}, 0, {-273, 485}, {215, 104, 195, 255} }},
	{{ {-1, 94, -17}, 0, {-60, 362}, {215, 104, 195, 255} }},
	{{ {0, 86, -33}, 0, {-60, 117}, {215, 104, 195, 255} }},
	{{ {-30, 76, -30}, 0, {-485, 117}, {215, 104, 195, 255} }},
	{{ {-14, 76, -39}, 0, {-273, -6}, {215, 104, 195, 255} }},
	{{ {-31, 85, -14}, 0, {-485, 362}, {215, 104, 195, 255} }},
	{{ {-28, 78, -10}, 0, {-187, -411}, {136, 216, 13, 255} }},
	{{ {-31, 85, -14}, 0, {-187, -529}, {136, 216, 13, 255} }},
	{{ {-30, 76, -30}, 0, {-358, -529}, {136, 216, 13, 255} }},
	{{ {-27, 69, -26}, 0, {-358, -411}, {136, 216, 13, 255} }},
	{{ {-27, 69, -26}, 0, {-358, -411}, {204, 182, 166, 255} }},
	{{ {-30, 76, -30}, 0, {-358, -529}, {204, 182, 166, 255} }},
	{{ {-14, 76, -39}, 0, {-529, -529}, {204, 182, 166, 255} }},
	{{ {-25, 70, -27}, 0, {-377, -420}, {204, 182, 166, 255} }},
	{{ {-11, 69, -35}, 0, {-529, -404}, {204, 182, 166, 255} }},
	{{ {2, 84, -22}, 0, {-93, 64}, {97, 188, 45, 255} }},
	{{ {-14, 83, -22}, 0, {-63, 12}, {41, 152, 61, 255} }},
	{{ {-7, 73, -34}, 0, {-32, 65}, {78, 155, 0, 255} }},
	{{ {3, 78, -29}, 0, {-69, 86}, {104, 183, 2, 255} }},
	{{ {-7, 73, -34}, 0, {92, 65}, {78, 155, 0, 255} }},
	{{ {-14, 83, -22}, 0, {123, 12}, {41, 152, 61, 255} }},
	{{ {-25, 70, -27}, 0, {156, 69}, {19, 131, 248, 255} }},
	{{ {-11, 69, -35}, 0, {105, 83}, {41, 140, 226, 255} }},
	{{ {-25, 70, -27}, 0, {276, 69}, {19, 131, 248, 255} }},
	{{ {-14, 83, -22}, 0, {309, 12}, {41, 152, 61, 255} }},
	{{ {-27, 79, -10}, 0, {343, 69}, {10, 198, 113, 255} }},
	{{ {-27, 79, -10}, 0, {343, 69}, {10, 198, 113, 255} }},
	{{ {-27, 69, -26}, 0, {280, 77}, {222, 134, 6, 255} }},
	{{ {-25, 70, -27}, 0, {276, 69}, {19, 131, 248, 255} }},
	{{ {-28, 78, -10}, 0, {339, 77}, {215, 184, 97, 255} }},
	{{ {-27, 79, -10}, 0, {-469, 69}, {10, 198, 113, 255} }},
	{{ {-14, 83, -22}, 0, {-435, 12}, {41, 152, 61, 255} }},
	{{ {-9, 88, -7}, 0, {-404, 65}, {70, 208, 94, 255} }},
	{{ {-14, 87, -4}, 0, {-417, 83}, {29, 224, 119, 255} }},
	{{ {-14, 83, -22}, 0, {-249, 12}, {41, 152, 61, 255} }},
	{{ {2, 84, -22}, 0, {-219, 64}, {97, 188, 45, 255} }},
	{{ {2, 87, -13}, 0, {-243, 86}, {98, 223, 73, 255} }},
	{{ {-9, 88, -7}, 0, {-280, 65}, {70, 208, 94, 255} }},
};

Gfx red_coin_Icosphere_mesh_layer_1_tri_2[] = {
	gsSPVertex(red_coin_Icosphere_mesh_layer_1_vtx_2 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 8, 5, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(12, 13, 10, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSPVertex(red_coin_Icosphere_mesh_layer_1_vtx_2 + 15, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 8, 5, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(8, 10, 5, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSPVertex(red_coin_Icosphere_mesh_layer_1_vtx_2 + 30, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(5, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(9, 11, 12, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(red_coin_Icosphere_mesh_layer_1_vtx_2 + 46, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSPEndDisplayList(),
};


Gfx mat_red_coin_red[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(red_coin_red_lights),
	gsSPEndDisplayList(),
};

Gfx mat_red_coin_mario_logo[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, red_coin_mario_logo_ci4_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(7, 7),
	gsDPLoadSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, red_coin_mario_logo_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadBlock(7, 0, 0, 255, 1024),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(red_coin_mario_logo_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_red_coin_mario_logo[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_red_coin_metal_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT),
	gsSPSetGeometryMode(G_TEXTURE_GEN),
	gsSPTexture(1984, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, red_coin_metal_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_red_coin_metal_001[] = {
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsSPEndDisplayList(),
};

Gfx red_coin_Icosphere_mesh_layer_1[] = {
	gsSPDisplayList(mat_red_coin_red),
	gsSPDisplayList(red_coin_Icosphere_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_red_coin_mario_logo),
	gsSPDisplayList(red_coin_Icosphere_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_red_coin_mario_logo),
	gsSPDisplayList(mat_red_coin_metal_001),
	gsSPDisplayList(red_coin_Icosphere_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_red_coin_metal_001),
	gsSPEndDisplayList(),
};

Gfx red_coin_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

