/* Function at 0x806B8388, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_806B8388(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0x1e */ // 0x806B8390
    /* li r5, -1 */ // 0x806B8394
    *(0x14 + r1) = r0; // stw @ 0x806B8398
    FUN_806724B8(r4, r5); // bl 0x806724B8
    /* lis r3, 0 */ // 0x806B83A0
    /* lis r5, 0 */ // 0x806B83A4
    /* lfs f1, 0(r5) */ // 0x806B83A8
    /* li r4, 0 */ // 0x806B83AC
    r3 = *(0 + r3); // lwz @ 0x806B83B0
    /* li r5, 0x1e */ // 0x806B83B4
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    r0 = *(0x14 + r1); // lwz @ 0x806B83BC
    return;
}