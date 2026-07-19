/* Function at 0x8066CA08, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8066CA08(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0x1e */ // 0x8066CA10
    /* li r5, -1 */ // 0x8066CA14
    *(0x14 + r1) = r0; // stw @ 0x8066CA18
    FUN_806724B8(r4, r5); // bl 0x806724B8
    /* lis r3, 0 */ // 0x8066CA20
    /* lis r5, 0 */ // 0x8066CA24
    /* lfs f1, 0(r5) */ // 0x8066CA28
    /* li r4, 5 */ // 0x8066CA2C
    r3 = *(0 + r3); // lwz @ 0x8066CA30
    /* li r5, 0x1e */ // 0x8066CA34
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    r0 = *(0x14 + r1); // lwz @ 0x8066CA3C
    return;
}