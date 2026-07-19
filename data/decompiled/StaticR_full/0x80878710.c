/* Function at 0x80878710, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

int FUN_80878710(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0 */ // 0x80878718
    r3 = r3 + 0x98; // 0x8087871C
    *(0x14 + r1) = r0; // stw @ 0x80878720
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80878728
    /* li r4, 1 */ // 0x8087872C
    /* lfs f1, 0(r5) */ // 0x80878730
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x80878738
    return;
}