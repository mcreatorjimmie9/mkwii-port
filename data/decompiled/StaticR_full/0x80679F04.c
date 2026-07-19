/* Function at 0x80679F04, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80679F04(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80679F10
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x80679F1C
    r3 = r31 + 0x174; // 0x80679F20
    r4 = r4 + 0; // 0x80679F24
    *(0 + r31) = r4; // stw @ 0x80679F28
    FUN_8066D634(r4, r3, r4); // bl 0x8066D634
    r3 = r31 + 0x20c; // 0x80679F30
    FUN_806A0418(r3, r4, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x80679F38
    /* lis r5, 0 */ // 0x80679F3C
    r3 = r31 + 0x380; // 0x80679F40
    /* li r6, 0x174 */ // 0x80679F44
    r4 = r4 + 0; // 0x80679F48
    r5 = r5 + 0; // 0x80679F4C
    /* li r7, 6 */ // 0x80679F50
    FUN_805E3430(r3, r6, r4, r5, r7); // bl 0x805E3430
}