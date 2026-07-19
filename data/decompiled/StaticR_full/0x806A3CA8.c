/* Function at 0x806A3CA8, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_806A3CA8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806A3CBC
    r30 = r3;
    r0 = *(0x470 + r3); // lwz @ 0x806A3CC4
    if (==) goto 0x0x806a3d38;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x806A3CD4
    r12 = *(0x68 + r12); // lwz @ 0x806A3CD8
    /* mtctr r12 */ // 0x806A3CDC
    /* bctrl  */ // 0x806A3CE0
    r0 = *(0 + r31); // lha @ 0x806A3CE4
    *(0x10 + r3) = r0; // sth @ 0x806A3CE8
    r0 = *(2 + r31); // lha @ 0x806A3CEC
    *(0x12 + r3) = r0; // sth @ 0x806A3CF0
    r0 = *(4 + r31); // lha @ 0x806A3CF4
    *(0x14 + r3) = r0; // sth @ 0x806A3CF8
    r0 = *(6 + r31); // lha @ 0x806A3CFC
    *(0x16 + r3) = r0; // sth @ 0x806A3D00
    r3 = *(0x470 + r30); // lwz @ 0x806A3D04
    r12 = *(0 + r3); // lwz @ 0x806A3D08
    r12 = *(0x68 + r12); // lwz @ 0x806A3D0C
    /* mtctr r12 */ // 0x806A3D10
    /* bctrl  */ // 0x806A3D14
    r0 = *(0 + r31); // lha @ 0x806A3D18
    *(0x18 + r3) = r0; // sth @ 0x806A3D1C
    r0 = *(2 + r31); // lha @ 0x806A3D20
    *(0x1a + r3) = r0; // sth @ 0x806A3D24
    r0 = *(4 + r31); // lha @ 0x806A3D28
    *(0x1c + r3) = r0; // sth @ 0x806A3D2C
    r0 = *(6 + r31); // lha @ 0x806A3D30
    *(0x1e + r3) = r0; // sth @ 0x806A3D34
    r0 = *(0x14 + r1); // lwz @ 0x806A3D38
    r31 = *(0xc + r1); // lwz @ 0x806A3D3C
    r30 = *(8 + r1); // lwz @ 0x806A3D40
    return;
}