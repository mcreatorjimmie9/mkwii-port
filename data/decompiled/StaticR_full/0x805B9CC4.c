/* Function at 0x805B9CC4, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_805B9CC4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r0 = r3 + -3; // 0x805B9CD0
    *(0xc + r1) = r31; // stw @ 0x805B9CD8
    /* li r31, 0 */ // 0x805B9CDC
    if (<=) goto 0x0x805b9d00;
    if (==) goto 0x0x805b9d20;
    if (==) goto 0x0x805b9d60;
    if (==) goto 0x0x805b9da0;
    /* b 0x805b9ddc */ // 0x805B9CFC
    /* li r3, 0x1c */ // 0x805B9D00
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805b9d18;
    /* li r4, 1 */ // 0x805B9D10
    FUN_805BA164(r3, r4); // bl 0x805BA164
    r31 = r3;
    /* b 0x805b9ddc */ // 0x805B9D1C
    /* li r3, 0x1c */ // 0x805B9D20
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x805b9ddc;
    /* li r4, 2 */ // 0x805B9D34
}