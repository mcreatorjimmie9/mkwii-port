/* Function at 0x806ABC00, size=88 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

void FUN_806ABC00(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0x1e */ // 0x806ABC08
    /* li r5, -1 */ // 0x806ABC0C
    *(0x14 + r1) = r0; // stw @ 0x806ABC10
    FUN_806724B8(r4, r5); // bl 0x806724B8
    /* lis r3, 0 */ // 0x806ABC18
    /* li r4, 0xcf */ // 0x806ABC1C
    r3 = *(0 + r3); // lwz @ 0x806ABC20
    /* li r5, 0 */ // 0x806ABC24
    FUN_80787C60(r3, r4, r5); // bl 0x80787C60
    /* lis r3, 0 */ // 0x806ABC2C
    /* lis r5, 0 */ // 0x806ABC30
    /* lfs f1, 0(r5) */ // 0x806ABC34
    /* li r4, 3 */ // 0x806ABC38
    r3 = *(0 + r3); // lwz @ 0x806ABC3C
    /* li r5, 0 */ // 0x806ABC40
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    r0 = *(0x14 + r1); // lwz @ 0x806ABC48
    return;
}