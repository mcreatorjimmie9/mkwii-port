/* Function at 0x80621F70, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_80621F70(void)
{
    /* li r0, 0 */ // 0x80621F70
    *(0x90 + r3) = r4; // stw @ 0x80621F74
    *(0x94 + r3) = r0; // sth @ 0x80621F78
    return;
}