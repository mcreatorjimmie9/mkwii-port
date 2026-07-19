/* Function at 0x8086A95C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8086A95C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8086A968
    r31 = r3;
    FUN_80823778(); // bl 0x80823778
    r3 = r31 + 0x88; // 0x8086A974
    /* li r4, 1 */ // 0x8086A978
    FUN_80841FBC(r3, r4); // bl 0x80841FBC
    r3 = r31 + 0x54; // 0x8086A980
    /* li r4, 0xf */ // 0x8086A984
    FUN_8083FC10(r3, r4, r3, r4); // bl 0x8083FC10
    r0 = *(0x14 + r1); // lwz @ 0x8086A98C
    r31 = *(0xc + r1); // lwz @ 0x8086A990
    return;
}