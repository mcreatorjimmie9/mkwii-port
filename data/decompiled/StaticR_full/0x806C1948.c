/* Function at 0x806C1948, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806C1948(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806C1958
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806C1960
    r30 = r3;
    if (==) goto 0x0x806c19b8;
    /* li r4, -1 */ // 0x806C196C
    r3 = r3 + 0x344; // 0x806C1970
    FUN_8064ED24(r4, r3); // bl 0x8064ED24
    r3 = r30 + 0x1c8; // 0x806C1978
    /* li r4, -1 */ // 0x806C197C
    FUN_8064EE50(r4, r3, r3, r4); // bl 0x8064EE50
    r3 = r30 + 0x54; // 0x806C1984
    /* li r4, -1 */ // 0x806C1988
    FUN_80677594(r3, r4, r3, r4); // bl 0x80677594
    r3 = r30 + 0x44; // 0x806C1990
    /* li r4, -1 */ // 0x806C1994
    FUN_80668158(r3, r4, r3, r4); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x806C19A0
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806c19b8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806C19BC
    r30 = *(8 + r1); // lwz @ 0x806C19C0
    r0 = *(0x14 + r1); // lwz @ 0x806C19C4
    return;
}