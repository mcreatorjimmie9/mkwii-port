/* Function at 0x807B5C4C, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_807B5C4C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807B5C60
    r30 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r4, 0 */ // 0x807B5C6C
    /* li r3, 0 */ // 0x807B5C74
    /* li r0, -1 */ // 0x807B5C78
    r4 = r4 + 0; // 0x807B5C7C
    *(0xc + r30) = r4; // stw @ 0x807B5C80
    *(0x10 + r30) = r3; // stw @ 0x807B5C84
    *(0x1c + r30) = r3; // stw @ 0x807B5C88
    *(0x20 + r30) = r0; // stw @ 0x807B5C8C
    if (==) goto 0x0x807b5ca0;
    if (==) goto 0x0x807b5cc0;
    /* b 0x807b5cdc */ // 0x807B5C9C
    /* li r3, 0x164 */ // 0x807B5CA0
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x807b5cb8;
    r4 = r30;
    FUN_807BD18C(r3, r4); // bl 0x807BD18C
    *(0x10 + r30) = r3; // stw @ 0x807B5CB8
    /* b 0x807b5cdc */ // 0x807B5CBC
    /* li r3, 0x164 */ // 0x807B5CC0
    FUN_805E3430(r4, r3); // bl 0x805E3430
}