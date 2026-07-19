/* Function at 0x8078119C, size=196 bytes */
/* Stack frame: 272 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8078119C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -272(r1) */
    /* saved r31 */
    *(0x10c + r1) = r31; // stw @ 0x807811A8
    r31 = r3;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r3 = *(0x58 + r31); // lwz @ 0x807811B4
    /* lis r8, 0 */ // 0x807811B8
    r0 = *(0x5c + r31); // lwz @ 0x807811BC
    r7 = r8 + 0; // 0x807811C0
    *(0xdc + r1) = r0; // stw @ 0x807811C4
    /* lis r6, 0 */ // 0x807811C8
    /* lfs f5, 0(r6) */ // 0x807811CC
    /* lis r4, 0 */ // 0x807811D0
    *(0xd8 + r1) = r3; // stw @ 0x807811D4
    /* lis r5, 0 */ // 0x807811D8
    /* lfs f3, 0(r4) */ // 0x807811DC
    r6 = *(0x60 + r31); // lwz @ 0x807811E4
    r0 = *(0x64 + r31); // lwz @ 0x807811E8
    *(0xe4 + r1) = r0; // stw @ 0x807811EC
    /* lfs f4, 0(r5) */ // 0x807811F0
    *(0xe0 + r1) = r6; // stw @ 0x807811F4
    /* lfs f2, 0(r8) */ // 0x807811F8
    r4 = *(0x68 + r31); // lwz @ 0x807811FC
    r0 = *(0x6c + r31); // lwz @ 0x80781200
    *(0xec + r1) = r0; // stw @ 0x80781204
    /* lfs f1, 4(r7) */ // 0x80781208
    *(0xe8 + r1) = r4; // stw @ 0x8078120C
    /* lfs f0, 8(r7) */ // 0x80781210
    r4 = *(0x70 + r31); // lwz @ 0x80781214
    r0 = *(0x74 + r31); // lwz @ 0x80781218
    *(0xf4 + r1) = r0; // stw @ 0x8078121C
    *(0xf0 + r1) = r4; // stw @ 0x80781220
    r4 = *(0x78 + r31); // lwz @ 0x80781224
    r0 = *(0x7c + r31); // lwz @ 0x80781228
    *(0xfc + r1) = r0; // stw @ 0x8078122C
    *(0xf8 + r1) = r4; // stw @ 0x80781230
    r4 = *(0x80 + r31); // lwz @ 0x80781234
    r0 = *(0x84 + r31); // lwz @ 0x80781238
    *(0x104 + r1) = r0; // stw @ 0x8078123C
    *(0x100 + r1) = r4; // stw @ 0x80781240
    /* stfs f2, 0xe4(r1) */ // 0x80781244
    /* stfs f1, 0xf4(r1) */ // 0x80781248
    /* stfs f0, 0x104(r1) */ // 0x8078124C
    /* stfs f3, 8(r1) */ // 0x80781250
    /* stfs f4, 0xc(r1) */ // 0x80781254
    /* stfs f5, 0x10(r1) */ // 0x80781258
    FUN_805E3430(); // bl 0x805E3430
}