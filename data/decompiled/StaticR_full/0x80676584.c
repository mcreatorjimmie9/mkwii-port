/* Function at 0x80676584, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80676584(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r3 = r3 + 0x98; // 0x8067658C
    *(0x14 + r1) = r0; // stw @ 0x80676590
    *(0xc + r1) = r31; // stw @ 0x80676594
    r31 = r4;
    /* li r4, 1 */ // 0x8067659C
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    if (==) goto 0x0x806765c0;
    /* lis r5, 0 */ // 0x806765AC
    /* li r4, 2 */ // 0x806765B0
    /* lfs f1, 0(r5) */ // 0x806765B4
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x806765d0 */ // 0x806765BC
    /* lis r5, 0 */ // 0x806765C0
    /* li r4, 0 */ // 0x806765C4
    /* lfs f1, 0(r5) */ // 0x806765C8
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x806765D0
    r31 = *(0xc + r1); // lwz @ 0x806765D4
    return;
}