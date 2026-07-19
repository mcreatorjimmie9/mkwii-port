/* Function at 0x806C013C, size=96 bytes */
/* Stack frame: 16 bytes */
/* Calls: 4 function(s) */

int FUN_806C013C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x806C0148
    if (==) goto 0x0x806c0170;
    /* li r4, 0 */ // 0x806C0150
    r3 = r3 + 0x98; // 0x806C0154
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806C015C
    /* li r4, 2 */ // 0x806C0160
    /* lfs f1, 0(r5) */ // 0x806C0164
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    /* b 0x806c018c */ // 0x806C016C
    /* li r4, 0 */ // 0x806C0170
    r3 = r3 + 0x98; // 0x806C0174
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806C017C
    /* li r4, 1 */ // 0x806C0180
    /* lfs f1, 0(r5) */ // 0x806C0184
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x806C018C
    return;
}