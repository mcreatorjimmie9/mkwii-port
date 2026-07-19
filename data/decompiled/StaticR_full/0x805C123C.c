/* Function at 0x805C123C, size=256 bytes */
/* Stack frame: 0 bytes */

int FUN_805C123C(int r3, int r4, int r5, int r6)
{
    r4 = *(0x177c + r3); // lbz @ 0x805C123C
    if (>=) goto 0x0x805c1254;
    r0 = r4 + 1; // 0x805C1248
    *(0x177c + r3) = r0; // stb @ 0x805C124C
    /* b 0x805c125c */ // 0x805C1250
    /* li r0, 0 */ // 0x805C1254
    *(0x177c + r3) = r0; // stb @ 0x805C1258
    /* li r6, 0 */ // 0x805C125C
    /* mulli r5, r6, 0xf0 */ // 0x805C1260
    /* li r6, 6 */ // 0x805C1264
    r4 = r3 + r5; // 0x805C1268
    r0 = *(0xcfa + r4); // lbz @ 0x805C126C
    /* mulli r5, r6, 0xf0 */ // 0x805C1270
    *(0xcf9 + r4) = r0; // stb @ 0x805C1274
    r0 = *(0xcf2 + r4); // lhz @ 0x805C1278
    *(0xcf0 + r4) = r0; // sth @ 0x805C127C
    r0 = *(0xdea + r4); // lbz @ 0x805C1280
    *(0xde9 + r4) = r0; // stb @ 0x805C1284
    r0 = *(0xde2 + r4); // lhz @ 0x805C1288
    *(0xde0 + r4) = r0; // sth @ 0x805C128C
    r0 = *(0xeda + r4); // lbz @ 0x805C1290
    *(0xed9 + r4) = r0; // stb @ 0x805C1294
    r0 = *(0xed2 + r4); // lhz @ 0x805C1298
    *(0xed0 + r4) = r0; // sth @ 0x805C129C
    r0 = *(0xfca + r4); // lbz @ 0x805C12A0
    *(0xfc9 + r4) = r0; // stb @ 0x805C12A4
    r0 = *(0xfc2 + r4); // lhz @ 0x805C12A8
    *(0xfc0 + r4) = r0; // sth @ 0x805C12AC
    r0 = *(0x10ba + r4); // lbz @ 0x805C12B0
    *(0x10b9 + r4) = r0; // stb @ 0x805C12B4
    r0 = *(0x10b2 + r4); // lhz @ 0x805C12B8
    *(0x10b0 + r4) = r0; // sth @ 0x805C12BC
    r0 = *(0x11aa + r4); // lbz @ 0x805C12C0
    *(0x11a9 + r4) = r0; // stb @ 0x805C12C4
    r0 = *(0x11a2 + r4); // lhz @ 0x805C12C8
    *(0x11a0 + r4) = r0; // sth @ 0x805C12CC
    r4 = r3 + r5; // 0x805C12D0
    r0 = *(0xcfa + r4); // lbz @ 0x805C12D4
    *(0xcf9 + r4) = r0; // stb @ 0x805C12D8
    r0 = *(0xcf2 + r4); // lhz @ 0x805C12DC
    *(0xcf0 + r4) = r0; // sth @ 0x805C12E0
    r0 = *(0xdea + r4); // lbz @ 0x805C12E4
    *(0xde9 + r4) = r0; // stb @ 0x805C12E8
    r0 = *(0xde2 + r4); // lhz @ 0x805C12EC
    *(0xde0 + r4) = r0; // sth @ 0x805C12F0
    r0 = *(0xeda + r4); // lbz @ 0x805C12F4
    *(0xed9 + r4) = r0; // stb @ 0x805C12F8
    r0 = *(0xed2 + r4); // lhz @ 0x805C12FC
    *(0xed0 + r4) = r0; // sth @ 0x805C1300
    r0 = *(0xfca + r4); // lbz @ 0x805C1304
    *(0xfc9 + r4) = r0; // stb @ 0x805C1308
    r0 = *(0xfc2 + r4); // lhz @ 0x805C130C
    *(0xfc0 + r4) = r0; // sth @ 0x805C1310
    r0 = *(0x10ba + r4); // lbz @ 0x805C1314
    *(0x10b9 + r4) = r0; // stb @ 0x805C1318
    r0 = *(0x10b2 + r4); // lhz @ 0x805C131C
    *(0x10b0 + r4) = r0; // sth @ 0x805C1320
    r0 = *(0x11aa + r4); // lbz @ 0x805C1324
    *(0x11a9 + r4) = r0; // stb @ 0x805C1328
    r0 = *(0x11a2 + r4); // lhz @ 0x805C132C
    *(0x11a0 + r4) = r0; // sth @ 0x805C1330
    r3 = *(0x177c + r3); // lbz @ 0x805C1334
    return;
}