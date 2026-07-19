/* Function at 0x805B12B4, size=224 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B12B4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0 */ // 0x805B12C0
    *(0xc + r1) = r31; // stw @ 0x805B12C4
    r31 = r3;
    r4 = *(4 + r3); // lwz @ 0x805B12CC
    *(0xe4 + r3) = r0; // stb @ 0x805B12D0
    if (==) goto 0x0x805b12f4;
    r12 = *(0 + r4); // lwz @ 0x805B12DC
    r3 = r4;
    r12 = *(0x10 + r12); // lwz @ 0x805B12E4
    /* mtctr r12 */ // 0x805B12E8
    /* bctrl  */ // 0x805B12EC
    /* b 0x805b12f8 */ // 0x805B12F0
    /* li r3, -1 */ // 0x805B12F4
    if (!=) goto 0x0x805b1310;
    r3 = *(4 + r31); // lwz @ 0x805B1300
    /* li r0, 0 */ // 0x805B1304
    *(0xa6 + r3) = r0; // stb @ 0x805B1308
    /* b 0x805b1380 */ // 0x805B130C
    r3 = *(4 + r31); // lwz @ 0x805B1310
    if (==) goto 0x0x805b1330;
    r12 = *(0 + r3); // lwz @ 0x805B131C
    r12 = *(0x10 + r12); // lwz @ 0x805B1320
    /* mtctr r12 */ // 0x805B1324
    /* bctrl  */ // 0x805B1328
    /* b 0x805b1334 */ // 0x805B132C
    /* li r3, -1 */ // 0x805B1330
    if (==) goto 0x0x805b1380;
    r3 = *(0xe8 + r31); // lwz @ 0x805B133C
    r0 = *(0x14 + r3); // lwz @ 0x805B1340
    if (==) goto 0x0x805b1358;
    if (==) goto 0x0x805b1360;
    /* b 0x805b1380 */ // 0x805B1354
    /* li r0, 2 */ // 0x805B1358
    *(0x14 + r3) = r0; // stw @ 0x805B135C
    r3 = *(0xe8 + r31); // lwz @ 0x805B1360
    r4 = *(0xd8 + r31); // lwz @ 0x805B1364
    FUN_805B494C(); // bl 0x805B494C
    if (==) goto 0x0x805b1380;
    r0 = *(0xd8 + r31); // lwz @ 0x805B1374
    *(0xdc + r31) = r0; // stw @ 0x805B1378
    *(0xe0 + r31) = r3; // stw @ 0x805B137C
    r0 = *(0x14 + r1); // lwz @ 0x805B1380
    r31 = *(0xc + r1); // lwz @ 0x805B1384
    return;
}