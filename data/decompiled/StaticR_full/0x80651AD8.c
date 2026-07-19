/* Function at 0x80651AD8, size=460 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 8 function(s) */

int FUN_80651AD8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80651AF4
    r28 = r3;
    r3 = *(0x1914 + r3); // lwz @ 0x80651AFC
    r4 = *(0x1918 + r28); // lwz @ 0x80651B00
    FUN_806607C4(); // bl 0x806607C4
    r3 = *(0xb8 + r3); // lwz @ 0x80651B08
    FUN_806622BC(); // bl 0x806622BC
    r30 = r3;
    /* li r31, 0 */ // 0x80651B14
    /* li r4, 0 */ // 0x80651B18
    /* li r5, 0 */ // 0x80651B1C
    /* li r6, 0 */ // 0x80651B20
    FUN_805E4A80(r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x80651b84;
    r3 = r30;
    /* li r4, 1 */ // 0x80651B34
    /* li r5, 0 */ // 0x80651B38
    /* li r6, 0 */ // 0x80651B3C
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x80651b84;
    r3 = r30;
    /* li r4, 2 */ // 0x80651B50
    /* li r5, 0 */ // 0x80651B54
    /* li r6, 0 */ // 0x80651B58
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x80651b84;
    r3 = r30;
    /* li r4, 2 */ // 0x80651B6C
    /* li r5, 1 */ // 0x80651B70
    /* li r6, 0 */ // 0x80651B74
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (==) goto 0x0x80651b88;
    /* li r31, 1 */ // 0x80651B84
    if (!=) goto 0x0x80651c54;
    /* lis r3, 0 */ // 0x80651B90
    r3 = *(0 + r3); // lwz @ 0x80651B94
    r3 = *(0 + r3); // lwz @ 0x80651B98
    r31 = *(0x13c + r3); // lwz @ 0x80651B9C
    if (!=) goto 0x0x80651bb0;
    /* li r31, 0 */ // 0x80651BA8
    /* b 0x80651c04 */ // 0x80651BAC
    /* lis r30, 0 */ // 0x80651BB0
    r30 = r30 + 0; // 0x80651BB4
    if (==) goto 0x0x80651c00;
    r12 = *(0 + r31); // lwz @ 0x80651BBC
    r3 = r31;
    r12 = *(0x60 + r12); // lwz @ 0x80651BC4
    /* mtctr r12 */ // 0x80651BC8
    /* bctrl  */ // 0x80651BCC
    /* b 0x80651be8 */ // 0x80651BD0
    if (!=) goto 0x0x80651be4;
    /* li r0, 1 */ // 0x80651BDC
    /* b 0x80651bf4 */ // 0x80651BE0
    r3 = *(0 + r3); // lwz @ 0x80651BE4
    if (!=) goto 0x0x80651bd4;
    /* li r0, 0 */ // 0x80651BF0
    if (==) goto 0x0x80651c00;
    /* b 0x80651c04 */ // 0x80651BFC
    /* li r31, 0 */ // 0x80651C00
    r12 = *(0 + r31); // lwz @ 0x80651C04
    r3 = r31;
    r12 = *(0x64 + r12); // lwz @ 0x80651C0C
    /* mtctr r12 */ // 0x80651C10
    /* bctrl  */ // 0x80651C14
    r12 = *(0 + r31); // lwz @ 0x80651C18
    r3 = r31;
    /* li r4, 0x157f */ // 0x80651C20
    /* li r5, 0 */ // 0x80651C24
    r12 = *(0x68 + r12); // lwz @ 0x80651C28
    /* mtctr r12 */ // 0x80651C2C
    /* bctrl  */ // 0x80651C30
    r12 = *(0 + r28); // lwz @ 0x80651C34
    r3 = r28;
    /* li r4, 0x4d */ // 0x80651C3C
    /* li r5, 0 */ // 0x80651C40
    r12 = *(0x24 + r12); // lwz @ 0x80651C44
    /* mtctr r12 */ // 0x80651C48
    /* bctrl  */ // 0x80651C4C
    /* b 0x80651c84 */ // 0x80651C50
    r3 = *(0x1914 + r28); // lwz @ 0x80651C54
    r4 = *(0x1918 + r28); // lwz @ 0x80651C58
    FUN_8066084C(); // bl 0x8066084C
    r3 = r29;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r28); // lwz @ 0x80651C68
    r3 = r28;
    /* li r4, 0x50 */ // 0x80651C70
    /* li r5, 0 */ // 0x80651C74
    r12 = *(0x1c + r12); // lwz @ 0x80651C78
    /* mtctr r12 */ // 0x80651C7C
    /* bctrl  */ // 0x80651C80
    r0 = *(0x24 + r1); // lwz @ 0x80651C84
    r31 = *(0x1c + r1); // lwz @ 0x80651C88
    r30 = *(0x18 + r1); // lwz @ 0x80651C8C
    r29 = *(0x14 + r1); // lwz @ 0x80651C90
    r28 = *(0x10 + r1); // lwz @ 0x80651C94
    return;
}