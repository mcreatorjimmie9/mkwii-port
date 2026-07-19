/* Function at 0x807C4EF0, size=1056 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r16 */
/* Calls: 2 function(s) */

int FUN_807C4EF0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -224(r1) */
    /* saved r16 */
    /* stmw r16, 0xa0(r1) */ // 0x807C4EFC
    /* lis r31, 0 */ // 0x807C4F00
    r30 = r3;
    r31 = r31 + 0; // 0x807C4F08
    FUN_807CF000(); // bl 0x807CF000
    /* lis r5, 0 */ // 0x807C4F10
    /* lis r4, 0 */ // 0x807C4F14
    /* li r0, 0 */ // 0x807C4F18
    *(0x3c + r30) = r0; // stw @ 0x807C4F1C
    r5 = r5 + 0; // 0x807C4F20
    r4 = r4 + 0; // 0x807C4F24
    *(0x34 + r30) = r5; // stw @ 0x807C4F28
    /* lis r3, 0 */ // 0x807C4F2C
    r5 = r30 + 0xf0; // 0x807C4F30
    r6 = r30 + 0x148; // 0x807C4F34
    *(0x38 + r30) = r4; // stw @ 0x807C4F38
    r8 = *(0 + r3); // lwzu @ 0x807C4F40
    r7 = *(4 + r3); // lwz @ 0x807C4F44
    *(0x44 + r30) = r7; // stw @ 0x807C4F48
    *(0x40 + r30) = r8; // stw @ 0x807C4F4C
    r7 = *(8 + r3); // lwz @ 0x807C4F50
    *(0x48 + r30) = r7; // stw @ 0x807C4F54
    r8 = *(0 + r3); // lwz @ 0x807C4F58
    r7 = *(4 + r3); // lwz @ 0x807C4F5C
    *(0x50 + r30) = r7; // stw @ 0x807C4F60
    *(0x4c + r30) = r8; // stw @ 0x807C4F64
    r7 = *(8 + r3); // lwz @ 0x807C4F68
    *(0x54 + r30) = r7; // stw @ 0x807C4F6C
    r8 = *(0 + r3); // lwz @ 0x807C4F70
    r7 = *(4 + r3); // lwz @ 0x807C4F74
    *(0x5c + r30) = r7; // stw @ 0x807C4F78
    *(0x58 + r30) = r8; // stw @ 0x807C4F7C
    r7 = *(8 + r3); // lwz @ 0x807C4F80
    *(0x60 + r30) = r7; // stw @ 0x807C4F84
    *(0x64 + r30) = r4; // stw @ 0x807C4F88
    *(0x68 + r30) = r0; // stw @ 0x807C4F8C
    r8 = *(0 + r3); // lwz @ 0x807C4F90
    r7 = *(4 + r3); // lwz @ 0x807C4F94
    *(0x70 + r30) = r7; // stw @ 0x807C4F98
    *(0x6c + r30) = r8; // stw @ 0x807C4F9C
    r7 = *(8 + r3); // lwz @ 0x807C4FA0
    *(0x74 + r30) = r7; // stw @ 0x807C4FA4
    r8 = *(0 + r3); // lwz @ 0x807C4FA8
    r7 = *(4 + r3); // lwz @ 0x807C4FAC
    *(0x7c + r30) = r7; // stw @ 0x807C4FB0
    *(0x78 + r30) = r8; // stw @ 0x807C4FB4
    r7 = *(8 + r3); // lwz @ 0x807C4FB8
    *(0x80 + r30) = r7; // stw @ 0x807C4FBC
    r8 = *(0 + r3); // lwz @ 0x807C4FC0
    r7 = *(4 + r3); // lwz @ 0x807C4FC4
    *(0x88 + r30) = r7; // stw @ 0x807C4FC8
    *(0x84 + r30) = r8; // stw @ 0x807C4FCC
    r7 = *(8 + r3); // lwz @ 0x807C4FD0
    *(0x8c + r30) = r7; // stw @ 0x807C4FD4
    *(0x90 + r30) = r4; // stw @ 0x807C4FD8
    *(0x94 + r30) = r0; // stw @ 0x807C4FDC
    r8 = *(0 + r3); // lwz @ 0x807C4FE0
    r7 = *(4 + r3); // lwz @ 0x807C4FE4
    *(0x9c + r30) = r7; // stw @ 0x807C4FE8
    *(0x98 + r30) = r8; // stw @ 0x807C4FEC
    r7 = *(8 + r3); // lwz @ 0x807C4FF0
    *(0xa0 + r30) = r7; // stw @ 0x807C4FF4
    r8 = *(0 + r3); // lwz @ 0x807C4FF8
    r7 = *(4 + r3); // lwz @ 0x807C4FFC
    *(0xa8 + r30) = r7; // stw @ 0x807C5000
    *(0xa4 + r30) = r8; // stw @ 0x807C5004
    r7 = *(8 + r3); // lwz @ 0x807C5008
    *(0xac + r30) = r7; // stw @ 0x807C500C
    r8 = *(0 + r3); // lwz @ 0x807C5010
    r7 = *(4 + r3); // lwz @ 0x807C5014
    *(0xb4 + r30) = r7; // stw @ 0x807C5018
    *(0xb0 + r30) = r8; // stw @ 0x807C501C
    r7 = *(8 + r3); // lwz @ 0x807C5020
    *(0xb8 + r30) = r7; // stw @ 0x807C5024
    *(0xbc + r30) = r4; // stw @ 0x807C5028
    *(0xc0 + r30) = r0; // stw @ 0x807C502C
    r7 = *(0 + r3); // lwz @ 0x807C5030
    r4 = *(4 + r3); // lwz @ 0x807C5034
    *(0xc8 + r30) = r4; // stw @ 0x807C5038
    *(0xc4 + r30) = r7; // stw @ 0x807C503C
    r4 = *(8 + r3); // lwz @ 0x807C5040
    *(0xcc + r30) = r4; // stw @ 0x807C5044
    r7 = *(0 + r3); // lwz @ 0x807C5048
    r4 = *(4 + r3); // lwz @ 0x807C504C
    *(0xd4 + r30) = r4; // stw @ 0x807C5050
    *(0xd0 + r30) = r7; // stw @ 0x807C5054
    r4 = *(8 + r3); // lwz @ 0x807C5058
    *(0xd8 + r30) = r4; // stw @ 0x807C505C
    r7 = *(0 + r3); // lwz @ 0x807C5060
    r4 = *(4 + r3); // lwz @ 0x807C5064
    *(0xe0 + r30) = r4; // stw @ 0x807C5068
    *(0xdc + r30) = r7; // stw @ 0x807C506C
    r3 = *(8 + r3); // lwz @ 0x807C5070
    *(0xe4 + r30) = r3; // stw @ 0x807C5074
    *(0xe8 + r30) = r0; // stw @ 0x807C5078
    *(0xec + r30) = r0; // stw @ 0x807C507C
    if (>=) goto 0x0x807c51a8;
    r3 = r30 + 0xf0; // 0x807C5084
    r4 = r30 + 0x108; // 0x807C5088
    /* subf r7, r3, r6 */ // 0x807C508C
    r8 = r7 + 7; // 0x807C5090
    r0 = r8 >> 3; // srawi
    /* addze r9, r0 */ // 0x807C5098
    if (<=) goto 0x0x807c5178;
    /* li r3, 0 */ // 0x807C50AC
    /* li r6, 0 */ // 0x807C50B0
    if (>) goto 0x0x807c50dc;
    /* rlwinm. r0, r7, 0, 0, 0 */ // 0x807C50B8
    /* li r7, 1 */ // 0x807C50BC
    if (!=) goto 0x0x807c50d0;
    /* rlwinm. r0, r8, 0, 0, 0 */ // 0x807C50C4
    if (==) goto 0x0x807c50d0;
    /* li r7, 0 */ // 0x807C50CC
    if (==) goto 0x0x807c50dc;
    /* li r6, 1 */ // 0x807C50D8
    if (==) goto 0x0x807c510c;
    /* rlwinm. r7, r9, 0, 0, 0 */ // 0x807C50E4
    /* li r6, 1 */ // 0x807C50E8
    if (!=) goto 0x0x807c5100;
    r0 = r10 rlwinm 0; // rlwinm
    if (==) goto 0x0x807c5100;
    /* li r6, 0 */ // 0x807C50FC
    if (==) goto 0x0x807c510c;
    /* li r3, 1 */ // 0x807C5108
    if (==) goto 0x0x807c5178;
    r0 = r4 + 0x3f; // 0x807C5114
    /* li r3, 0 */ // 0x807C5118
    /* subf r0, r5, r0 */ // 0x807C511C
    /* srwi r0, r0, 6 */ // 0x807C5120
    /* mtctr r0 */ // 0x807C5124
    if (>=) goto 0x0x807c5178;
    *(0 + r5) = r3; // stw @ 0x807C5130
    *(4 + r5) = r3; // stw @ 0x807C5134
    *(8 + r5) = r3; // stw @ 0x807C5138
    *(0xc + r5) = r3; // stw @ 0x807C513C
    *(0x10 + r5) = r3; // stw @ 0x807C5140
    *(0x14 + r5) = r3; // stw @ 0x807C5144
    *(0x18 + r5) = r3; // stw @ 0x807C5148
    *(0x1c + r5) = r3; // stw @ 0x807C514C
    *(0x20 + r5) = r3; // stw @ 0x807C5150
    *(0x24 + r5) = r3; // stw @ 0x807C5154
    *(0x28 + r5) = r3; // stw @ 0x807C5158
    *(0x2c + r5) = r3; // stw @ 0x807C515C
    *(0x30 + r5) = r3; // stw @ 0x807C5160
    *(0x34 + r5) = r3; // stw @ 0x807C5164
    *(0x38 + r5) = r3; // stw @ 0x807C5168
    *(0x3c + r5) = r3; // stw @ 0x807C516C
    r5 = r5 + 0x40; // 0x807C5170
    if (counter-- != 0) goto 0x0x807c5130;
    r3 = r30 + 0x148; // 0x807C5178
    /* li r4, 0 */ // 0x807C517C
    r0 = r3 + 7; // 0x807C5180
    /* subf r0, r5, r0 */ // 0x807C5184
    /* srwi r0, r0, 3 */ // 0x807C5188
    /* mtctr r0 */ // 0x807C518C
    if (>=) goto 0x0x807c51a8;
    *(0 + r5) = r4; // stw @ 0x807C5198
    *(4 + r5) = r4; // stw @ 0x807C519C
    r5 = r5 + 8; // 0x807C51A0
    if (counter-- != 0) goto 0x0x807c5198;
    r5 = r30 + 0x150; // 0x807C51A8
    r3 = r30 + 0x168; // 0x807C51AC
    /* li r0, 0 */ // 0x807C51B4
    *(0x148 + r30) = r0; // stw @ 0x807C51B8
    *(0x14c + r30) = r0; // stw @ 0x807C51BC
    if (>=) goto 0x0x807c52e8;
    r6 = r30 + 0x150; // 0x807C51C4
    r4 = r30 + 0x128; // 0x807C51C8
    /* subf r7, r6, r3 */ // 0x807C51CC
    r8 = r7 + 7; // 0x807C51D0
    r0 = r8 >> 3; // srawi
    /* addze r9, r0 */ // 0x807C51D8
    if (<=) goto 0x0x807c52b8;
    /* li r3, 0 */ // 0x807C51EC
    /* li r6, 0 */ // 0x807C51F0
    if (>) goto 0x0x807c521c;
    /* rlwinm. r0, r7, 0, 0, 0 */ // 0x807C51F8
    /* li r7, 1 */ // 0x807C51FC
    if (!=) goto 0x0x807c5210;
    /* rlwinm. r0, r8, 0, 0, 0 */ // 0x807C5204
    if (==) goto 0x0x807c5210;
    /* li r7, 0 */ // 0x807C520C
    if (==) goto 0x0x807c521c;
    /* li r6, 1 */ // 0x807C5218
    if (==) goto 0x0x807c524c;
    /* rlwinm. r7, r9, 0, 0, 0 */ // 0x807C5224
    /* li r6, 1 */ // 0x807C5228
    if (!=) goto 0x0x807c5240;
    r0 = r10 rlwinm 0; // rlwinm
    if (==) goto 0x0x807c5240;
    /* li r6, 0 */ // 0x807C523C
    if (==) goto 0x0x807c524c;
    /* li r3, 1 */ // 0x807C5248
    if (==) goto 0x0x807c52b8;
    r0 = r4 + 0x3f; // 0x807C5254
    /* li r3, 0 */ // 0x807C5258
    /* subf r0, r5, r0 */ // 0x807C525C
    /* srwi r0, r0, 6 */ // 0x807C5260
    /* mtctr r0 */ // 0x807C5264
    if (>=) goto 0x0x807c52b8;
    *(0 + r5) = r3; // stw @ 0x807C5270
    *(4 + r5) = r3; // stw @ 0x807C5274
    *(8 + r5) = r3; // stw @ 0x807C5278
    *(0xc + r5) = r3; // stw @ 0x807C527C
    *(0x10 + r5) = r3; // stw @ 0x807C5280
    *(0x14 + r5) = r3; // stw @ 0x807C5284
    *(0x18 + r5) = r3; // stw @ 0x807C5288
    *(0x1c + r5) = r3; // stw @ 0x807C528C
    *(0x20 + r5) = r3; // stw @ 0x807C5290
    *(0x24 + r5) = r3; // stw @ 0x807C5294
    *(0x28 + r5) = r3; // stw @ 0x807C5298
    *(0x2c + r5) = r3; // stw @ 0x807C529C
    *(0x30 + r5) = r3; // stw @ 0x807C52A0
    *(0x34 + r5) = r3; // stw @ 0x807C52A4
    *(0x38 + r5) = r3; // stw @ 0x807C52A8
    *(0x3c + r5) = r3; // stw @ 0x807C52AC
    r5 = r5 + 0x40; // 0x807C52B0
    if (counter-- != 0) goto 0x0x807c5270;
    r3 = r30 + 0x168; // 0x807C52B8
    /* li r4, 0 */ // 0x807C52BC
    r0 = r3 + 7; // 0x807C52C0
    /* subf r0, r5, r0 */ // 0x807C52C4
    /* srwi r0, r0, 3 */ // 0x807C52C8
    /* mtctr r0 */ // 0x807C52CC
    if (>=) goto 0x0x807c52e8;
    *(0 + r5) = r4; // stw @ 0x807C52D8
    *(4 + r5) = r4; // stw @ 0x807C52DC
    r5 = r5 + 8; // 0x807C52E0
    if (counter-- != 0) goto 0x0x807c52d8;
    /* li r0, 0 */ // 0x807C52E8
    *(0x168 + r30) = r0; // stw @ 0x807C52EC
    /* li r3, 0x30 */ // 0x807C52F0
    *(0x16c + r30) = r0; // stw @ 0x807C52F4
    *(0x170 + r30) = r0; // stw @ 0x807C52F8
    *(0x178 + r30) = r0; // stw @ 0x807C52FC
    *(0x17c + r30) = r0; // stw @ 0x807C5300
    *(0x180 + r30) = r0; // stw @ 0x807C5304
    *(0x190 + r30) = r0; // stw @ 0x807C5308
    FUN_805E3430(); // bl 0x805E3430
}