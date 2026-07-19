/* Function at 0x80899260, size=80 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80899260(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -240(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xe8 + r1) = r30; // stw @ 0x80899270
    r30 = r3;
    FUN_8089BD4C(); // bl 0x8089BD4C
    r12 = *(0 + r30); // lwz @ 0x8089927C
    r3 = r30;
    r12 = *(0x38 + r12); // lwz @ 0x80899284
    /* mtctr r12 */ // 0x80899288
    /* bctrl  */ // 0x8089928C
    /* lis r4, 0 */ // 0x80899290
    r6 = r3;
    r4 = r4 + 0; // 0x80899298
    r5 = r4 + 0xf; // 0x808992A0
    /* li r4, 0x80 */ // 0x808992A4
    /* crclr cr1eq */ // 0x808992A8
    FUN_805E3430(r4, r3, r5, r4); // bl 0x805E3430
}