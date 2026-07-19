/* Function at 0x806E01AC, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806E01AC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806E01B8
    r3 = *(0x68 + r3); // lwz @ 0x806E01BC
    r0 = r3 + -7; // 0x806E01C0
    if (<=) goto 0x0x806e021c;
    if (!=) goto 0x0x806e0240;
    /* lis r31, 0 */ // 0x806E01D4
    /* li r0, 0 */ // 0x806E01D8
    r3 = *(0 + r31); // lwz @ 0x806E01DC
    /* li r4, 0x7d */ // 0x806E01E0
    /* li r5, 0 */ // 0x806E01E4
    r6 = *(0x98 + r3); // lwz @ 0x806E01E8
    r3 = *(0x3c8 + r6); // lwz @ 0x806E01EC
    *(0x3bc + r6) = r3; // stw @ 0x806E01F0
    r3 = *(0 + r31); // lwz @ 0x806E01F4
    r3 = *(0x98 + r3); // lwz @ 0x806E01F8
    *(0x3c0 + r3) = r0; // stw @ 0x806E01FC
    r3 = *(0 + r31); // lwz @ 0x806E0200
    FUN_80698C44(); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x806E0208
    /* li r4, 0 */ // 0x806E020C
    /* li r5, 0xff */ // 0x806E0210
    FUN_80698CD0(r4, r5); // bl 0x80698CD0
    /* b 0x806e0240 */ // 0x806E0218
    /* lis r31, 0 */ // 0x806E021C
    /* li r4, 0x41 */ // 0x806E0220
    r3 = *(0 + r31); // lwz @ 0x806E0224
    /* li r5, 0 */ // 0x806E0228
    FUN_80698C44(r4, r5); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x806E0230
    /* li r4, 0 */ // 0x806E0234
    /* li r5, 0xff */ // 0x806E0238
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    r0 = *(0x14 + r1); // lwz @ 0x806E0240
    r31 = *(0xc + r1); // lwz @ 0x806E0244
    return;
}