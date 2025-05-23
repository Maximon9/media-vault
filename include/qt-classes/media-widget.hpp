#ifndef MEDIA_WIDGET_HPP
#define MEDIA_WIDGET_HPP

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include "../types/media-file-data-types.hpp"
#include "../include/utils/enum-utils.hpp"

typedef struct MediaContext MediaContext;

class MediaWidget : public QWidget {
public:
	QLabel *label;
	e_MediaStringifyTYPE media_stringify_type;
	const MediaContext *media_context;
	explicit MediaWidget(const MediaContext *media_context,
			     e_MediaStringifyTYPE media_stringify_type = MEDIA_STRINGIFY_TYPE_FILENAME,
			     QWidget *parent = nullptr);
	void update_media_data(e_MediaStringifyTYPE *media_stringify_type = nullptr);
	void remove_widget(bool delete_later = true);
};

#endif // MEDIA_WIDGET_HPP