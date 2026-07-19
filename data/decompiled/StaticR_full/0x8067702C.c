/* Function at 0x8067702C, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8067702C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 4 */ // 0x80677034
    *(0x24 + r1) = r0; // stw @ 0x80677038
    /* li r0, 0 */ // 0x8067703C
    *(0x1c + r1) = r31; // stw @ 0x80677040
    *(0x18c + r3) = r0; // stw @ 0x80677044
    r3 = r3 + 0x98; // 0x80677048
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x80677050
    r31 = r3;
    if (==) goto 0x0x8067706c;
    if (==) goto 0x0x806770c0;
    /* b 0x806770d0 */ // 0x80677068
    r3 = *(0 + r3); // lwz @ 0x8067706C
    /* slwi r0, r0, 4 */ // 0x80677070
    /* lwzx r3, r3, r0 */ // 0x80677074
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8067707C
    /* lis r0, 0x4330 */ // 0x80677080
    *(0xc + r1) = r4; // stw @ 0x80677084
    /* lis r3, 0 */ // 0x80677088
    /* lfd f3, 0(r3) */ // 0x8067708C
    /* lis r5, 0 */ // 0x80677090
    *(8 + r1) = r0; // stw @ 0x80677094
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x8067709C
}