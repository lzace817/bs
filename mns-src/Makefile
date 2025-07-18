.SUFFIXES:

OUTPUT ?= out
ITEMS := $(OUTPUT)/bar/msg.check $(OUTPUT)/foo/msg.check
DIRS = $(patsubst %/,%,$(dir $(ITEMS)))
SOURCE ?= .

all: $(ITEMS)

$(ITEMS): | $(DIRS)

$(DIRS):
	@mkdir -p $@

$(OUTPUT)/%.check: $(SOURCE)/%.txt
	@cat $<
	@touch $@

clean:
	rm -r $(ITEMS)

.PHONY = all clean