/* Function at 0x808771A0, size=224 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_808771A0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x808771A8
    *(0x14 + r1) = r0; // stw @ 0x808771AC
    *(0xc + r1) = r31; // stw @ 0x808771B0
    r31 = r3;
    r3 = r3 + 0x98; // 0x808771B8
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x808771C0
    /* li r4, 0 */ // 0x808771C4
    /* lfs f1, 0(r5) */ // 0x808771C8
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    /* lis r3, 0 */ // 0x808771D0
    r3 = *(0 + r3); // lwz @ 0x808771D4
    r0 = *(0xb90 + r3); // lwz @ 0x808771D8
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x808771DC
    if (==) goto 0x0x80877210;
    r0 = *(0xb70 + r3); // lwz @ 0x808771E4
    /* lis r3, 0 */ // 0x808771E8
    r3 = *(0 + r3); // lwz @ 0x808771EC
    if (!=) goto 0x0x80877204;
    r3 = *(0x10 + r3); // lwz @ 0x808771F8
    r0 = *(8 + r3); // lwz @ 0x808771FC
    /* b 0x80877208 */ // 0x80877200
    /* li r0, 0 */ // 0x80877204
    *(0x198 + r31) = r0; // stw @ 0x80877208
    /* b 0x80877264 */ // 0x8087720C
    r3 = *(0xb70 + r3); // lwz @ 0x80877210
    /* li r4, 0 */ // 0x80877214
    r0 = r3 + -3; // 0x80877218
    if (>) goto 0x0x80877238;
    /* li r3, 1 */ // 0x80877224
    r0 = r3 << r0; // slw
    /* andi. r0, r0, 0xc1 */ // 0x8087722C
    if (==) goto 0x0x80877238;
    r4 = r3;
    if (==) goto 0x0x80877264;
    r3 = r31;
    FUN_80876FEC(r4, r3); // bl 0x80876FEC
    /* lis r4, 0 */ // 0x80877248
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x80877250
    r3 = *(0xc + r3); // lwz @ 0x80877254
    /* lwzx r3, r3, r0 */ // 0x80877258
    r0 = *(0x22 + r3); // lhz @ 0x8087725C
    *(0x198 + r31) = r0; // stw @ 0x80877260
    r3 = r31;
    FUN_80876EDC(r3); // bl 0x80876EDC
    r0 = *(0x14 + r1); // lwz @ 0x8087726C
    r31 = *(0xc + r1); // lwz @ 0x80877270
    return;
}