/* Function at 0x80824BC0, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80824BC0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80824BC8
    /* mulli r0, r3, 0x1c */ // 0x80824BD0
    r4 = r4 + 0; // 0x80824BD4
    *(0x1c + r1) = r31; // stw @ 0x80824BD8
    /* lis r3, 0 */ // 0x80824BDC
    r4 = r4 + r0; // 0x80824BE0
    *(0x18 + r1) = r30; // stw @ 0x80824BE4
    *(0x14 + r1) = r29; // stw @ 0x80824BE8
    r0 = *(4 + r4); // lwz @ 0x80824BEC
    r30 = *(8 + r4); // lwz @ 0x80824BF0
    /* mulli r4, r0, 0x24 */ // 0x80824BF4
    r5 = *(0 + r3); // lwz @ 0x80824BF8
    /* lis r3, 0 */ // 0x80824BFC
    r4 = r5 + r4; // 0x80824C00
    r3 = r3 + 0; // 0x80824C04
    /* mulli r0, r0, 0x74 */ // 0x80824C08
    r29 = r4 + 0x48; // 0x80824C0C
    r31 = r3 + r0; // 0x80824C10
    /* b 0x80824c44 */ // 0x80824C14
    r0 = *(4 + r31); // lwz @ 0x80824C18
    if (!=) goto 0x0x80824c2c;
    /* li r3, 0 */ // 0x80824C24
    /* b 0x80824c60 */ // 0x80824C28
    r3 = r29;
    FUN_80821A3C(r3, r3); // bl 0x80821A3C
    if (!=) goto 0x0x80824c44;
    /* li r3, 0 */ // 0x80824C3C
    /* b 0x80824c60 */ // 0x80824C40
    r3 = r29;
    FUN_80822540(r3, r3); // bl 0x80822540
    r0 = *(0xc + r29); // lwz @ 0x80824C4C
    /* subf r0, r3, r0 */ // 0x80824C50
    if (<) goto 0x0x80824c18;
    /* li r3, 1 */ // 0x80824C5C
    r0 = *(0x24 + r1); // lwz @ 0x80824C60
    r31 = *(0x1c + r1); // lwz @ 0x80824C64
    r30 = *(0x18 + r1); // lwz @ 0x80824C68
    r29 = *(0x14 + r1); // lwz @ 0x80824C6C
    return;
}