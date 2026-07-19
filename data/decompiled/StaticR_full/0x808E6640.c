/* Function at 0x808E6640, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_808E6640(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x808E664C
    *(0xc + r1) = r31; // stw @ 0x808E6650
    r31 = r3;
    if (!=) goto 0x0x808e6684;
    r4 = *(0x654 + r3); // lwz @ 0x808E665C
    r5 = r3 + 0x6c8; // 0x808E6660
    /* li r6, 0 */ // 0x808E6664
    r0 = r4 + 1; // 0x808E6668
    *(0x654 + r3) = r0; // stw @ 0x808E666C
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    r3 = r31 + 0x6c8; // 0x808E6674
    FUN_808D110C(r6, r3); // bl 0x808D110C
    r3 = r31 + 0x6c8; // 0x808E667C
    /* b 0x808e66c0 */ // 0x808E6680
    if (!=) goto 0x0x808e66bc;
    r4 = *(0x654 + r3); // lwz @ 0x808E668C
    r5 = r3 + 0xb54; // 0x808E6690
    /* li r6, 0 */ // 0x808E6694
    r0 = r4 + 1; // 0x808E6698
    *(0x654 + r3) = r0; // stw @ 0x808E669C
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    r3 = r31 + 0xb54; // 0x808E66A4
    /* li r4, 1 */ // 0x808E66A8
    /* li r5, 0 */ // 0x808E66AC
    FUN_808D1BD4(r3, r4, r5); // bl 0x808D1BD4
    r3 = r31 + 0xb54; // 0x808E66B4
    /* b 0x808e66c0 */ // 0x808E66B8
    /* li r3, 0 */ // 0x808E66BC
    r0 = *(0x14 + r1); // lwz @ 0x808E66C0
    r31 = *(0xc + r1); // lwz @ 0x808E66C4
    return;
}