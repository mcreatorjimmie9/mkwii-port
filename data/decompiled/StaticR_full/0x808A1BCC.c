/* Function at 0x808A1BCC, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808A1BCC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808A1BD8
    r31 = r3;
    r4 = *(0x2c + r3); // lhz @ 0x808A1BE0
    /* rlwinm. r0, r4, 0, 0x1e, 0x1e */ // 0x808A1BE4
    if (==) goto 0x0x808a1c10;
    r3 = r3 + 0x58; // 0x808A1BEC
    r4 = r31 + 0x48; // 0x808A1BF0
    r5 = r31 + 0x30; // 0x808A1BF4
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r0 = *(0x2c + r31); // lhz @ 0x808A1BFC
    r0 = r0 rlwinm 0; // rlwinm
    r0 = r0 | 4; // 0x808A1C04
    *(0x2c + r31) = r0; // sth @ 0x808A1C08
    /* b 0x808a1c38 */ // 0x808A1C0C
    /* clrlwi. r0, r4, 0x1f */ // 0x808A1C10
    if (==) goto 0x0x808a1c38;
    /* lfs f2, 0x30(r3) */ // 0x808A1C18
    r0 = r4 | 4; // 0x808A1C1C
    /* lfs f1, 0x34(r3) */ // 0x808A1C20
    /* lfs f0, 0x38(r3) */ // 0x808A1C24
    /* stfs f2, 0x64(r3) */ // 0x808A1C28
    /* stfs f1, 0x74(r3) */ // 0x808A1C2C
    /* stfs f0, 0x84(r3) */ // 0x808A1C30
    *(0x2c + r3) = r0; // sth @ 0x808A1C34
}