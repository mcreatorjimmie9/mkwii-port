/* Function at 0x807969B0, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807969B0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x807969C8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807969D0
    r29 = r3;
    if (!=) goto 0x0x807969e4;
    /* li r3, 0 */ // 0x807969DC
    /* b 0x80796a18 */ // 0x807969E0
    r3 = r3 + 0x94; // 0x807969E4
    FUN_8078FFE0(r3, r3); // bl 0x8078FFE0
    if (==) goto 0x0x807969fc;
    /* li r3, 0 */ // 0x807969F4
    /* b 0x80796a18 */ // 0x807969F8
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x80796A08
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    /* cntlzw r0, r3 */ // 0x80796A10
    /* srwi r3, r0, 5 */ // 0x80796A14
    r0 = *(0x24 + r1); // lwz @ 0x80796A18
    r31 = *(0x1c + r1); // lwz @ 0x80796A1C
    r30 = *(0x18 + r1); // lwz @ 0x80796A20
    r29 = *(0x14 + r1); // lwz @ 0x80796A24
}