Lights1 yellow_coin_f3dlite_material_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx yellow_coin_peppermint_ci8_aligner[] = {gsSPEndDisplayList()};
u8 yellow_coin_peppermint_ci8[] = {
	0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 
	0x04, 0x05, 0x06, 0x06, 0x06, 0x07, 0x08, 0x02, 
	0x02, 0x02, 0x09, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x0a, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x0b, 
	0x06, 0x0c, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x0e, 0x0f, 0x06, 0x06, 0x06, 0x10, 0x02, 
	0x02, 0x02, 0x01, 0x11, 0x06, 0x06, 0x06, 0x06, 
	0x12, 0x02, 0x02, 0x02, 0x02, 0x02, 0x13, 0x0f, 
	0x06, 0x06, 0x0f, 0x14, 0x15, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x0e, 0x0f, 0x06, 0x06, 0x05, 0x09, 
	0x02, 0x02, 0x02, 0x16, 0x06, 0x06, 0x06, 0x06, 
	0x17, 0x02, 0x02, 0x02, 0x02, 0x01, 0x10, 0x06, 
	0x06, 0x06, 0x06, 0x06, 0x05, 0x14, 0x12, 0x02, 
	0x02, 0x02, 0x02, 0x17, 0x18, 0x06, 0x06, 0x18, 
	0x01, 0x02, 0x02, 0x19, 0x06, 0x06, 0x06, 0x06, 
	0x03, 0x02, 0x02, 0x02, 0x02, 0x19, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0f, 0x14, 
	0x17, 0x02, 0x02, 0x02, 0x17, 0x18, 0x06, 0x06, 
	0x04, 0x02, 0x02, 0x13, 0x06, 0x06, 0x06, 0x1a, 
	0x02, 0x02, 0x02, 0x02, 0x01, 0x1a, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x05, 0x1b, 0x02, 0x02, 0x02, 0x12, 0x0f, 0x06, 
	0x1a, 0x03, 0x02, 0x03, 0x05, 0x06, 0x06, 0x1c, 
	0x02, 0x02, 0x02, 0x02, 0x19, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x1c, 0x0a, 0x02, 0x02, 0x13, 0x0f, 
	0x06, 0x0b, 0x02, 0x02, 0x18, 0x06, 0x06, 0x00, 
	0x02, 0x02, 0x02, 0x01, 0x18, 0x06, 0x06, 0x06, 
	0x07, 0x18, 0x1d, 0x05, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x05, 0x1e, 0x03, 0x02, 0x19, 
	0x06, 0x0f, 0x01, 0x02, 0x16, 0x06, 0x06, 0x0d, 
	0x02, 0x02, 0x02, 0x0b, 0x06, 0x06, 0x06, 0x05, 
	0x02, 0x02, 0x02, 0x02, 0x15, 0x09, 0x0b, 0x1f, 
	0x18, 0x06, 0x06, 0x06, 0x06, 0x14, 0x02, 0x03, 
	0x0c, 0x06, 0x20, 0x02, 0x10, 0x06, 0x06, 0x12, 
	0x02, 0x02, 0x03, 0x1d, 0x06, 0x06, 0x06, 0x1e, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x15, 0x1b, 0x16, 0x05, 0x06, 0x10, 0x02, 
	0x1b, 0x06, 0x00, 0x02, 0x21, 0x06, 0x1a, 0x02, 
	0x02, 0x02, 0x10, 0x06, 0x06, 0x06, 0x1f, 0x03, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x0a, 0x0c, 0x06, 0x0d, 
	0x01, 0x06, 0x10, 0x02, 0x22, 0x06, 0x21, 0x02, 
	0x02, 0x09, 0x06, 0x06, 0x06, 0x1f, 0x23, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x12, 0x24, 
	0x1b, 0x1b, 0x25, 0x17, 0x02, 0x01, 0x18, 0x07, 
	0x03, 0x1a, 0x21, 0x02, 0x11, 0x06, 0x24, 0x02, 
	0x03, 0x07, 0x06, 0x06, 0x11, 0x01, 0x02, 0x02, 
	0x02, 0x17, 0x24, 0x14, 0x0c, 0x05, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x06, 0x0c, 0x24, 0x15, 0x11, 
	0x17, 0x1a, 0x19, 0x13, 0x06, 0x07, 0x03, 0x02, 
	0x04, 0x06, 0x06, 0x11, 0x12, 0x02, 0x02, 0x02, 
	0x1c, 0x0f, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0f, 
	0x16, 0x04, 0x0d, 0x1b, 0x14, 0x11, 0x19, 0x14, 
	0x24, 0x1d, 0x17, 0x16, 0x0f, 0x13, 0x02, 0x19, 
	0x05, 0x06, 0x18, 0x12, 0x02, 0x02, 0x02, 0x0a, 
	0x06, 0x06, 0x06, 0x06, 0x06, 0x05, 0x00, 0x01, 
	0x02, 0x02, 0x02, 0x15, 0x15, 0x26, 0x27, 0x0b, 
	0x00, 0x24, 0x14, 0x1d, 0x12, 0x02, 0x1b, 0x06, 
	0x06, 0x0c, 0x28, 0x02, 0x02, 0x03, 0x0d, 0x05, 
	0x06, 0x06, 0x06, 0x0f, 0x00, 0x29, 0x02, 0x02, 
	0x13, 0x21, 0x0f, 0x06, 0x11, 0x1c, 0x2a, 0x2b, 
	0x2b, 0x00, 0x19, 0x17, 0x0a, 0x10, 0x06, 0x05, 
	0x14, 0x01, 0x02, 0x02, 0x12, 0x1c, 0x06, 0x06, 
	0x06, 0x06, 0x1c, 0x13, 0x02, 0x02, 0x01, 0x14, 
	0x05, 0x06, 0x10, 0x0a, 0x17, 0x2c, 0x00, 0x2b, 
	0x2b, 0x2d, 0x1c, 0x11, 0x06, 0x0f, 0x21, 0x13, 
	0x02, 0x02, 0x15, 0x2e, 0x0f, 0x06, 0x06, 0x06, 
	0x05, 0x0d, 0x03, 0x02, 0x02, 0x01, 0x0c, 0x06, 
	0x06, 0x1b, 0x02, 0x12, 0x1a, 0x14, 0x24, 0x00, 
	0x0b, 0x27, 0x17, 0x15, 0x15, 0x02, 0x02, 0x02, 
	0x01, 0x00, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x0a, 0x02, 0x02, 0x02, 0x12, 0x18, 0x06, 0x05, 
	0x19, 0x02, 0x13, 0x0f, 0x16, 0x17, 0x1d, 0x24, 
	0x14, 0x19, 0x11, 0x14, 0x1b, 0x0d, 0x04, 0x22, 
	0x0f, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0f, 0x1c, 
	0x02, 0x02, 0x02, 0x12, 0x11, 0x06, 0x06, 0x2f, 
	0x02, 0x03, 0x07, 0x06, 0x13, 0x19, 0x1a, 0x17, 
	0x11, 0x15, 0x24, 0x0c, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x05, 0x0c, 0x14, 0x24, 0x17, 0x02, 
	0x02, 0x02, 0x01, 0x11, 0x06, 0x06, 0x07, 0x03, 
	0x02, 0x20, 0x06, 0x11, 0x02, 0x21, 0x1a, 0x03, 
	0x07, 0x18, 0x01, 0x02, 0x17, 0x20, 0x1b, 0x1b, 
	0x24, 0x12, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x01, 0x1f, 0x06, 0x06, 0x06, 0x09, 0x02, 
	0x02, 0x21, 0x06, 0x22, 0x02, 0x10, 0x06, 0x01, 
	0x0d, 0x06, 0x0c, 0x0a, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x03, 0x1f, 0x06, 0x06, 0x06, 0x10, 0x02, 0x02, 
	0x02, 0x1a, 0x06, 0x21, 0x02, 0x00, 0x06, 0x1b, 
	0x02, 0x10, 0x06, 0x05, 0x16, 0x1b, 0x29, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x1e, 0x06, 0x06, 0x06, 0x1d, 0x03, 0x02, 0x02, 
	0x12, 0x06, 0x06, 0x10, 0x02, 0x30, 0x06, 0x0c, 
	0x03, 0x02, 0x14, 0x06, 0x06, 0x06, 0x06, 0x18, 
	0x1f, 0x0b, 0x09, 0x15, 0x02, 0x02, 0x02, 0x02, 
	0x05, 0x06, 0x06, 0x06, 0x0b, 0x02, 0x02, 0x02, 
	0x0d, 0x06, 0x06, 0x16, 0x02, 0x01, 0x0f, 0x06, 
	0x19, 0x02, 0x03, 0x1e, 0x05, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x06, 0x05, 0x1a, 0x18, 0x07, 
	0x06, 0x06, 0x06, 0x18, 0x01, 0x02, 0x02, 0x02, 
	0x00, 0x06, 0x06, 0x18, 0x02, 0x02, 0x0b, 0x06, 
	0x0f, 0x13, 0x02, 0x02, 0x0a, 0x1c, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x19, 0x02, 0x02, 0x02, 0x02, 
	0x1c, 0x06, 0x06, 0x05, 0x03, 0x02, 0x03, 0x1a, 
	0x06, 0x0f, 0x13, 0x02, 0x02, 0x02, 0x1b, 0x05, 
	0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x1a, 0x01, 0x02, 0x02, 0x02, 0x02, 
	0x1d, 0x06, 0x06, 0x06, 0x13, 0x02, 0x02, 0x04, 
	0x06, 0x06, 0x18, 0x17, 0x02, 0x02, 0x02, 0x15, 
	0x14, 0x0f, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x19, 0x02, 0x02, 0x02, 0x02, 0x03, 
	0x06, 0x06, 0x06, 0x06, 0x19, 0x02, 0x02, 0x01, 
	0x18, 0x06, 0x06, 0x18, 0x17, 0x02, 0x02, 0x02, 
	0x02, 0x12, 0x14, 0x31, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x10, 0x01, 0x02, 0x02, 0x02, 0x02, 0x17, 
	0x06, 0x06, 0x06, 0x06, 0x16, 0x02, 0x02, 0x02, 
	0x09, 0x05, 0x06, 0x06, 0x0f, 0x0e, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x15, 0x14, 0x0f, 0x06, 0x06, 
	0x0f, 0x13, 0x02, 0x02, 0x02, 0x02, 0x02, 0x12, 
	0x06, 0x06, 0x06, 0x06, 0x11, 0x01, 0x02, 0x02, 
	0x02, 0x10, 0x06, 0x06, 0x06, 0x0f, 0x0e, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x0d, 0x0c, 0x06, 
	0x0b, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x0a, 
	0x06, 0x06, 0x06, 0x06, 0x06, 0x09, 0x02, 0x02, 
	0x02, 0x32, 0x07, 0x06, 0x06, 0x06, 0x05, 0x04, 
	0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00, 
	
};

Gfx yellow_coin_peppermint_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 yellow_coin_peppermint_ci8_pal_rgba16[] = {
	0xec, 0x63, 0xd0, 0x85, 0xd0, 0x01, 0xd0, 0x43, 
	0xe3, 0xdf, 0xff, 0xbd, 0xff, 0xff, 0xf6, 0x31, 
	0xd0, 0x45, 0xda, 0x11, 0xd9, 0xcf, 0xe3, 0x9d, 
	0xf6, 0x73, 0xe2, 0xd7, 0xe2, 0x95, 0xff, 0x7b, 
	0xed, 0x29, 0xf6, 0xf7, 0xd9, 0x4b, 0xd9, 0x8d, 
	0xec, 0xa5, 0xd8, 0xc7, 0xf5, 0xad, 0xd9, 0x09, 
	0xf6, 0xb5, 0xe3, 0x5b, 0xff, 0x39, 0xe3, 0x19, 
	0xf5, 0xef, 0xf7, 0x39, 0xec, 0x21, 0xed, 0x6b, 
	0xe2, 0x53, 0xec, 0xe7, 0xed, 0xad, 0xd8, 0xc5, 
	0xda, 0x53, 0xda, 0x93, 0xd8, 0xc9, 0xf5, 0xed, 
	0xd8, 0x85, 0xd0, 0xc7, 0xe3, 0xdd, 0xe4, 0x21, 
	0xe3, 0x9b, 0xe3, 0x9f, 0xec, 0x61, 0xeb, 0xdf, 
	0xe2, 0x93, 0xff, 0xbb, 0xd0, 0x83, 
};

Vtx yellow_coin_Cylinder_mesh_layer_1_vtx_0[56] = {
	{{ {0, 9, -12}, 0, {695, 1084}, {0, 186, 150, 255} }},
	{{ {-28, 21, -12}, 0, {1054, 772}, {207, 207, 150, 255} }},
	{{ {-40, 49, -12}, 0, {1087, 298}, {186, 0, 150, 255} }},
	{{ {0, 89, -12}, 0, {300, -94}, {0, 70, 150, 255} }},
	{{ {-28, 78, -12}, 0, {775, -61}, {207, 49, 150, 255} }},
	{{ {40, 49, -12}, 0, {-92, 693}, {70, 0, 150, 255} }},
	{{ {28, 78, -12}, 0, {-59, 218}, {49, 49, 150, 255} }},
	{{ {28, 21, -12}, 0, {221, 1051}, {49, 207, 150, 255} }},
	{{ {-28, 78, 12}, 0, {1010, 710}, {207, 49, 106, 255} }},
	{{ {-40, 49, 12}, 0, {1010, 285}, {186, 0, 106, 255} }},
	{{ {-28, 21, 12}, 0, {710, -15}, {207, 207, 106, 255} }},
	{{ {28, 21, 12}, 0, {-15, 285}, {49, 207, 106, 255} }},
	{{ {0, 9, 12}, 0, {285, -15}, {0, 186, 106, 255} }},
	{{ {28, 78, 12}, 0, {285, 1010}, {49, 49, 106, 255} }},
	{{ {40, 49, 12}, 0, {-15, 710}, {70, 0, 106, 255} }},
	{{ {0, 89, 12}, 0, {710, 1010}, {0, 70, 106, 255} }},
	{{ {40, 49, 12}, 0, {687, 944}, {70, 0, 106, 255} }},
	{{ {48, 49, 0}, 0, {663, 906}, {127, 0, 0, 255} }},
	{{ {34, 83, 0}, 0, {330, 902}, {90, 90, 0, 255} }},
	{{ {28, 78, 12}, 0, {318, 944}, {49, 49, 106, 255} }},
	{{ {28, 21, 12}, 0, {942, 681}, {49, 207, 106, 255} }},
	{{ {48, 49, 0}, 0, {656, 906}, {127, 0, 0, 255} }},
	{{ {40, 49, 12}, 0, {680, 944}, {70, 0, 106, 255} }},
	{{ {34, 15, 0}, 0, {896, 670}, {90, 166, 0, 255} }},
	{{ {0, 9, 12}, 0, {942, 311}, {0, 186, 106, 255} }},
	{{ {0, 1, 0}, 0, {901, 333}, {0, 129, 0, 255} }},
	{{ {-28, 21, 12}, 0, {680, 48}, {207, 207, 106, 255} }},
	{{ {-34, 15, 0}, 0, {668, 90}, {166, 166, 0, 255} }},
	{{ {-40, 49, 12}, 0, {309, 48}, {186, 0, 106, 255} }},
	{{ {-48, 49, 0}, 0, {333, 86}, {129, 0, 0, 255} }},
	{{ {-28, 78, 12}, 0, {47, 311}, {207, 49, 106, 255} }},
	{{ {-34, 83, 0}, 0, {93, 322}, {166, 90, 0, 255} }},
	{{ {0, 89, 12}, 0, {47, 681}, {0, 70, 106, 255} }},
	{{ {-34, 83, 0}, 0, {93, 322}, {166, 90, 0, 255} }},
	{{ {-28, 78, 12}, 0, {47, 311}, {207, 49, 106, 255} }},
	{{ {0, 97, 0}, 0, {89, 659}, {0, 127, 0, 255} }},
	{{ {28, 78, 12}, 0, {309, 944}, {49, 49, 106, 255} }},
	{{ {34, 83, 0}, 0, {321, 902}, {90, 90, 0, 255} }},
	{{ {0, 89, -12}, 0, {156, 642}, {0, 70, 150, 255} }},
	{{ {28, 78, -12}, 0, {347, 860}, {49, 49, 150, 255} }},
	{{ {48, 49, 0}, 0, {656, 906}, {127, 0, 0, 255} }},
	{{ {40, 49, -12}, 0, {632, 861}, {70, 0, 150, 255} }},
	{{ {34, 15, 0}, 0, {896, 670}, {90, 166, 0, 255} }},
	{{ {28, 21, -12}, 0, {836, 651}, {49, 207, 150, 255} }},
	{{ {0, 1, 0}, 0, {901, 333}, {0, 129, 0, 255} }},
	{{ {0, 9, -12}, 0, {834, 350}, {0, 186, 150, 255} }},
	{{ {-34, 15, 0}, 0, {668, 90}, {166, 166, 0, 255} }},
	{{ {-28, 21, -12}, 0, {642, 132}, {207, 207, 150, 255} }},
	{{ {-48, 49, 0}, 0, {333, 86}, {129, 0, 0, 255} }},
	{{ {-28, 21, -12}, 0, {642, 132}, {207, 207, 150, 255} }},
	{{ {-34, 15, 0}, 0, {668, 90}, {166, 166, 0, 255} }},
	{{ {-40, 49, -12}, 0, {357, 131}, {186, 0, 150, 255} }},
	{{ {-34, 83, 0}, 0, {93, 322}, {166, 90, 0, 255} }},
	{{ {-28, 78, -12}, 0, {154, 341}, {207, 49, 150, 255} }},
	{{ {0, 97, 0}, 0, {89, 659}, {0, 127, 0, 255} }},
	{{ {0, 89, -12}, 0, {156, 642}, {0, 70, 150, 255} }},
};

Gfx yellow_coin_Cylinder_mesh_layer_1_tri_0[] = {
	gsSPVertex(yellow_coin_Cylinder_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(3, 5, 0, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(5, 7, 0, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(11, 13, 8, 0),
	gsSP1Triangle(11, 14, 13, 0),
	gsSP1Triangle(13, 15, 8, 0),
	gsSPVertex(yellow_coin_Cylinder_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 7, 4, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(yellow_coin_Cylinder_mesh_layer_1_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(5, 6, 3, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(8, 7, 5, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(yellow_coin_Cylinder_mesh_layer_1_vtx_0 + 48, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_yellow_coin_f3dlite_material[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, yellow_coin_peppermint_ci8_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(7, 50),
	gsDPLoadSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, yellow_coin_peppermint_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(yellow_coin_f3dlite_material_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_yellow_coin_f3dlite_material[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx yellow_coin_Cylinder_mesh_layer_1[] = {
	gsSPDisplayList(mat_yellow_coin_f3dlite_material),
	gsSPDisplayList(yellow_coin_Cylinder_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_yellow_coin_f3dlite_material),
	gsSPEndDisplayList(),
};

Gfx yellow_coin_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

