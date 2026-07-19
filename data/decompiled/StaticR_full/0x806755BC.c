/* Function at 0x806755BC, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_806755BC(int r3, int r5, int r6)
{
    r5 = r3;
    r3 = *(0x24c + r3); // lwz @ 0x806755C0
    r5 = r5 + 0x210; // 0x806755C4
    /* li r6, -1 */ // 0x806755C8
    /* b 0x8066b6b8 */ // 0x806755CC
}