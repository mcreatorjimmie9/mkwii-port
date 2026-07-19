/* Function at 0x8067E940, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8067E940(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8067E94C
    r31 = r3;
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x8067E95C
    r3 = r31;
    /* li r4, 0x7b */ // 0x8067E964
    /* li r5, 1 */ // 0x8067E968
    r12 = *(0x1c + r12); // lwz @ 0x8067E96C
    /* mtctr r12 */ // 0x8067E970
    /* bctrl  */ // 0x8067E974
    r0 = *(0x14 + r1); // lwz @ 0x8067E978
    r31 = *(0xc + r1); // lwz @ 0x8067E97C
    return;
}