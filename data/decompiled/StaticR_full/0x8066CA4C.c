/* Function at 0x8066CA4C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8066CA4C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0x1f */ // 0x8066CA54
    /* li r5, -1 */ // 0x8066CA58
    *(0x14 + r1) = r0; // stw @ 0x8066CA5C
    FUN_806724B8(r4, r5); // bl 0x806724B8
    /* lis r3, 0 */ // 0x8066CA64
    /* lis r5, 0 */ // 0x8066CA68
    /* lfs f1, 0(r5) */ // 0x8066CA6C
    /* li r4, 5 */ // 0x8066CA70
    r3 = *(0 + r3); // lwz @ 0x8066CA74
    /* li r5, 0xa */ // 0x8066CA78
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    r0 = *(0x14 + r1); // lwz @ 0x8066CA80
    return;
}