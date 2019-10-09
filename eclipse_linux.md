# Instalar Eclipse CDT (Linux)

- Esse é um guia para instalação do Eclipse no Linux utilizando as __mesmos conjuntos de softwares instalados nos laboratórios do DAELN__.

## Repositório local da instituição

1. Instalar o flatpak no sistema (se não estiver instalado).
2. Adicionar o repositório

```bash
sudo flatpak remote-add --if-not-exists flatpak-daeln http://arquivos.eletronica.florianopolis.ifsc.edu.br/flatpak-daeln/flatpak-daeln.flatpakrepo
```

3. Instalar o Eclipse

```bash
sudo flatpak install flatpak-daeln io.github.GnuMcuEclipse
```

4. Instalar regras no udev (se não estiver instalado - utilizando a compilação de regras do PlatformIO).

```
sudo curl https://raw.githubusercontent.com/platformio/platformio-core/develop/scripts/99-platformio-udev.rules -o /etc/udev/rules.d/99-platformio-udev.rules
sudo udevadm control --reload-rules
```

- Se desejar liberar apenas o STLink, pode ser utilizado as seguintes regras no [udev](https://github.com/texane/stlink/tree/master/etc/udev/rules.d).
