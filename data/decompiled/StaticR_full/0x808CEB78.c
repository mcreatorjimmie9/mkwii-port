/* Function at 0x808CEB78, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808CEB78(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3 + 0x1a0; // 0x808CEB88
    *(8 + r1) = r30; // stw @ 0x808CEB8C
    /* li r30, 0 */ // 0x808CEB90
    r3 = r31;
    FUN_80880C9C(r3); // bl 0x80880C9C
    if (==) goto 0x0x808cebac;
    /* li r3, 1 */ // 0x808CEBA4
    /* b 0x808cebc0 */ // 0x808CEBA8
    r30 = r30 + 1; // 0x808CEBAC
    r31 = r31 + 0xb90; // 0x808CEBB0
    if (<) goto 0x0x808ceb94;
    /* li r3, 0 */ // 0x808CEBBC
    r0 = *(0x14 + r1); // lwz @ 0x808CEBC0
    r31 = *(0xc + r1); // lwz @ 0x808CEBC4
    r30 = *(8 + r1); // lwz @ 0x808CEBC8
    return;
}